/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tupla_operazioni_avanzate.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danilo <danilo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 11:14:29 by danilo            #+#    #+#             */
/*   Updated: 2021/03/13 17:46:07 by danilo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tupla.h"

double	tupla_magnitude(t_tupla *tuple, t_aux *ausiliario)
{
	int i;
	int j;
	int k;
	int a;
	double res;

	i = tuple->x * tuple->x;
	j = tuple->y * tuple->y;
	k = tuple->z * tuple->z;
	a = i + j + k;
	res = sqrt(a);
	return (res);
}

void	tupla_normalizzazone(t_tupla *tuple, t_aux *ausiliario)
{
	float norma;

	norma = tupla_magnitude(tuple, ausiliario);
	tuple->nx = tuple->x / norma;
	tuple->ny = tuple->y / norma;
	tuple->nz = tuple->z / norma;
}

double	tupla_dot(t_tupla *tupla, t_aux *ausiliario)
{
	double a;
	double b;
	double c;

	a = tupla->x * ausiliario->x;
	b = tupla->y * ausiliario->y;
	c = tupla->z * ausiliario->z;
	return (a + b + c);
}

void	tupla_dot_cross(t_tupla *tupla, t_aux *ausiliario)
{
	tupla->px = ((tupla->y * ausiliario->z) - (tupla->z * ausiliario->y));
	tupla->py = ((tupla->z * ausiliario->x) - (tupla->x * ausiliario->z));
	tupla->pz = ((tupla->x * ausiliario->y) - (tupla->y * ausiliario->x));
}