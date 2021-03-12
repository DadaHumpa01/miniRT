/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tupla_operazioni.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danilo <danilo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 08:30:25 by danilo            #+#    #+#             */
/*   Updated: 2021/03/12 11:10:34 by danilo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tupla.h"

void	tupla_addizione(t_tupla *tuple, t_aux *ausiliario)
{
	tuple->x = ausiliario->x + tuple->x;
	tuple->y = ausiliario->y + tuple->y;
	tuple->z = ausiliario->z + tuple->z;
	tuple->w = ausiliario->w + tuple->w;
}

void	tupla_sottrazione(t_tupla *tuple, t_aux *ausiliario)
{
	if (tuple->w == 1 && ausiliario->w == 1)				//sotrazione punto punto
	{
		tuple->x = tuple->x - ausiliario->x;
		tuple->y = tuple->y - ausiliario->y;
		tuple->z = tuple->z - ausiliario->z;
		tuple->w = 0;
	}
	else if (tuple->w == 1 && ausiliario->w == 0)			//sotrazione punto vettore
	{
		tuple->x = tuple->x - ausiliario->x;
		tuple->y = tuple->y - ausiliario->y;
		tuple->z = tuple->z - ausiliario->z;
		tuple->w = 1;
	}
	else if (tuple->w == 0 && ausiliario->w == 0)			//sotrazione vettore vettore
	{
		tuple->x = tuple->x - ausiliario->x;
		tuple->y = tuple->y - ausiliario->y;
		tuple->z = tuple->z - ausiliario->z;
		tuple->w = 0;
	}
	else
		return ;
}

void	tupla_neg(t_tupla *tuple, t_aux *ausiliario)
{
	if (tuple->x == 0 && tuple->y == 0 && tuple->z == 0)
	{
		tuple->x = ausiliario->x * -1;
		tuple->y = ausiliario->y * -1;
		tuple->z = ausiliario->z * -1;
	}
	else
	{
		tuple->x = tuple->x * -1;
		tuple->y = tuple->y * -1;
		tuple->z = tuple->z * -1;
		tuple->w = tuple->w * -1;
	}
}

void	tupla_mot_scalare(t_tupla *tuple, t_aux *ausiliario, float num)
{
	tuple->x = tuple->x * num;
	tuple->y = tuple->y * num;
	tuple->z = tuple->z * num;
	tuple->w = tuple->w * num;
}

void	tupla_div_scalare(t_tupla *tuple, t_aux *ausiliario, float num)
{
	tuple->x = tuple->x / num;
	tuple->y = tuple->y / num;
	tuple->z = tuple->z / num;
	tuple->w = tuple->w / num;
}