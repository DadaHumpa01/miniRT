#ifndef TUPLA_H
# define TUPLA_H

# include <mlx.h>
# include <math.h>
# include <unistd.h>
# include <stdio.h>

typedef struct	s_data {
	void		*img;
	char		*addr;
	int			bits_per_pixel;
	int			line_length;
	int			endian;
}				t_data;

typedef	struct	s_tupla{
	float		x;
	float		y;
	float		z;
	float		w;
	double		nx;
	double		ny;
	double		nz;
	double		px;
	double		py;
	double		pz;
}				t_tupla;

typedef	struct	s_aux{
	float		x;
	float		y;
	float		z;
	float		w;
}				t_aux;

typedef struct	s_colori{
	float		r;
	float		g;
	float		b;
}				t_colori;

typedef struct	s_coloreaux{
	float		r;
	float		g;
	float		b;
}				t_coloreaux;

void			aux_vettore(float x, float y, float z, t_aux *ausiliario);
void			aux_punto(float x, float y, float z, t_aux *ausiliario);
int				aux_punto_o_vettore(t_aux *ausiliario);
void			tupla_punto(float x, float y, float z, t_tupla *tuple);
void			tupla_vettore(float x, float y, float z, t_tupla *tuple);
int				tupla_punto_o_vettore(t_tupla *tuple);
void			tupla_addizione(t_tupla *tuple, t_aux *ausiliario);
void			tupla_sottrazione(t_tupla *tuple, t_aux *ausiliario);
void			tupla_neg(t_tupla *tuple, t_aux *ausiliario);
void			tupla_mot_scalare(t_tupla *tuple, t_aux *ausiliario, float num);
void			tupla_div_scalare(t_tupla *tuple, t_aux *ausiliario, float num);
double			tupla_magnitude(t_tupla *tuple, t_aux *ausiliario);
void			tupla_normalizzazone(t_tupla *tuple, t_aux *ausiliario);
double			tupla_dot(t_tupla *tupla, t_aux *ausiliario);
void			tupla_dot_cross(t_tupla *tupla, t_aux *ausiliario);
void    		mixer(float r, float g, float b, t_colori *color);
void			mixer_aux(float r, float g, float b, t_coloreaux *coloraux);
void			colori_addizone(t_colori *color, t_coloreaux *coloraux);
void			colori_sottrazione(t_colori *color, t_coloreaux *coloraux);
void			colore_dot_scalare(t_colori *color, float num);
void			colore_dot(t_colori *color, t_coloreaux *coloreaux);

#endif