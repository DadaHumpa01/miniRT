#ifndef TUPLA_H
# define TUPLA_H

# include "matrici/matrice.h"
# include <stdio.h>
# include <math.h>
# include "mlx.h"

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

typedef struct	s_proiettile{
	float		x;
	float		y;
	float		z;
	float		vx;
	float		vy;
	float		vz;
}				t_proiettile;

typedef struct	s_ambiente{
	float		x;
	float		y;
	float		z;
	float		vx;
	float		vy;
	float		vz;
}				t_ambiente;

typedef struct	s_sfera{
	float		px;
	float		py;
	float		pz;
	float		pw;
	float		x;
	float		y;
	float		z;
	float		w;
	float		dx;
	float		dy;
	float		dz;
	float		dw;
	float		rtsx;
	float		rtsy;
	float		rtsz;
	float		rtsw;
	float		t1;
	float		t2;
}				t_sfera;

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
void			my_mlx_pixel_put(t_data *data, int x, int y, int color);
int				create_trgb(int t, int r, int g, int b);
void			creazione_vettore_dir_sfera(float x, float y, float z, t_sfera *sphere);
void			creazione_punto_sfera(float x, float y, float z, t_sfera *sphere);
void			spostamento_nel_tempo(float t, t_sfera *sphere);
double			delta(t_sfera *sphere);
void			punti_intersezione(t_sfera *sphere);

#endif
