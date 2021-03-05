#ifndef ELEMENTS_H
# define ELEMENTS_H

// Di seguito sono riportati tutte le strutture per ogni elemento

typedef struct	s_vector
{
	float x;
    float y;
    float z;
}				t_vector;

typedef struct	s_ray
{
	t_vector origin;
	t_vector dir;
}				t_ray;

typedef struct	s_color
{
	int t;
	int	r;
	int g;
	int b;
}				t_color;

typedef struct	s_camera
{
	t_vector	pos;
	int			fov;										
}				t_camera;

typedef	struct	s_light
{
	t_vector	pos;
	float		bright_ratio;
	t_color		color;
}				t_light;

//Mi serve una struttura utile per contenere i valori calcolati per le intersezioni
typedef struct s_calc
{
	float a;
	float b;
	float c;
	float delta;
	t_vector sub;
}				t_calc;

// A seguire vi sono le figure base
typedef struct	s_sphere
{
	t_vector	pos;
	t_vector	ori;
	t_color		color;
	float 		diameter;
}				t_sphere;

typedef struct	s_plane
{
	t_vector	pos;
	t_vector	ori;
	t_color		color;
}				t_plane;

typedef struct	s_square
{
	t_vector	pos;
	t_vector	ori;
	float		side_size;
	t_color		color;
}				t_square;

typedef	struct	s_cylinder
{
	t_vector	pos;
	t_vector	dir;
	t_color		color;
	float		diameter;
	float		height;
}				t_cylinder;

typedef struct	s_triangle
{
	t_vector	point1;
	t_vector	point2;
	t_vector	point3;
	t_color		color;
}				t_triangle;

#endif