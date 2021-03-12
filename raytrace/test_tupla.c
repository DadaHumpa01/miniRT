/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_tupla.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danilo <danilo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 07:49:27 by danilo            #+#    #+#             */
/*   Updated: 2021/03/12 08:31:14 by danilo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tupla.h"

int		tupla_punto_o_vettore(t_tupla *tuple)
{
	if (tuple->w == 1)
		return (1);             //ritorna 1 se è un punto
	else if (tuple->w == 0)
		return (2);             //ritorna 2 se è un vettore
	else
		return (0);
}

void	tupla_punto(float x, float y, float z, t_tupla *tuple)
{
	tuple->x = x;
	tuple->y = y;
	tuple->z = z;
	tuple->w = 1;
}

void	tupla_vettore(float x, float y, float z, t_tupla *tuple)
{
	tuple->x = x;
	tuple->y = y;
	tuple->z = z;
	tuple->w = 0;
}