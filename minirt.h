#ifndef MINIRT_H
# define MINIRT_H

# include <mlx.h>
# include <math.h>
# include "elements.h"

typedef struct	s_global
{
	t_sphere	*sp;
	t_square	*sq;
	
}				t_global;

//Vettori
t_vector create_vec(float x, float y, float z);
t_vector vec_add(t_vector v1, t_vector v2);
t_vector vec_sub(t_vector v1, t_vector v2);
t_vector vec_sub_float(t_vector v1, float t);
t_vector vec_mul_vec(t_vector v1, t_vector v2);
t_vector vec_mul_float(t_vector v1, float t);
t_vector vec_div(t_vector v1, t_vector v2);
t_vector vec_normalize(t_vector v);
float vec_length_squared(t_vector v);
float vec_dot(t_vector v1, t_vector v2);
float vec_length(t_vector v);

//Colori
int create_color(float r, float g, float b);
int	create_trgb(int t, int r, int g, int b);

//Raggio
t_ray create_ray(t_vector origin, t_vector direction);
t_vector find_point(float t);
t_vector ray_color(t_ray r);

#endif