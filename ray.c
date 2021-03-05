#include "minirt.h"

//Di seguito sono riportate le funzioni per gestire i raggi
//Partendo da quella che è la formula base

t_ray create_ray(t_vector origin, t_vector direction)
{
	t_ray ray;
	ray.origin = origin;
	ray.dir = direction;
	return(ray);
}

t_vector find_point(float t)
{
    t_ray ray;
    return(vec_add(ray.origin, vec_mul_float(ray.dir, t)));
}

// Ora controlliamo se il raggio ha effettivamente colpito una sfera
int	hit_sphere(t_sphere sph, t_ray r)
{
	t_calc s;

	s.sub = vec_sub(r.origin, sph.ori);
	//Ora calcoliamo a, b, c dalla formula e poi facciamo il discriminante
	s.a = vec_dot(r.dir, r.dir);
	s.b = 2 * vec_dot(r.dir, s.sub);
	s.c = vec_dot(s.sub, s.sub) - pow(sph.diameter / 2, 2);
	s.delta = pow(s.b, 2) - (4 * s.a * s.c);
	if(s.delta > 0)
		return(1);
	return(0);
}


//Questa funzione restituisce il colore del pixel che il raggio ha colpito
t_vector ray_color(t_ray r)
{
	t_vector norm_dir;
	t_vector colore1;
	t_vector colore2;
	float t;

	t_sphere sph;
	sph.ori = create_vec(0.0, 0.0, 1.0);
	sph.diameter = 0.5;

	t_vector v2;

	v2 = create_vec(1.0, 0.0, 0.0);
	if(hit_sphere(sph, r))
		return(v2);
	colore1 = create_vec(1.0, 1.0, 1.0); //Bianco
	colore2 = create_vec(0.5, 0.7, 1.0); //Blu
	norm_dir = vec_normalize(r.dir); // Mettiamo a norma la direzione del raggio
	t = 0.5*(norm_dir.y + 1.0); // Qui la t ha sempre un range [0, 1]
	//Il colore viene modificato in base allo spostamento della y
	return(vec_add(vec_mul_float(colore1, (1.0-t)), vec_mul_float(colore2, t)));
}
