#include "tupla.h"

int		aux_punto_o_vettore(t_aux *ausiliario)
{
	if (ausiliario->w == 1)
		return (1);             //ritorna 1 se è un punto
	else if (ausiliario->w == 0)
		return (2);             //ritorna 2 se è un vettore
	else
		return (0);
}

void	aux_punto(float x, float y, float z, t_aux *ausiliario)
{
	ausiliario->x = x;
	ausiliario->y = y;
	ausiliario->z = z;
	ausiliario->w = 1;
}

void	aux_vettore(float x, float y, float z, t_aux *ausiliario)
{
	ausiliario->x = x;
	ausiliario->y = y;
	ausiliario->z = z;
	ausiliario->w = 0;
}