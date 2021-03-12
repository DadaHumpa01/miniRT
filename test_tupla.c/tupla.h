#ifndef TUPLA_H
# define TUPLA_H

#include "stdio.h"
#include <math.h>

typedef	struct	s_tupla{
	float		x;
	float		y;
	float		z;
	float		w;
}				t_tupla;

typedef	struct	s_aux{
	float		x;
	float		y;
	float		z;
	float		w;
}				t_aux;

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

#endif