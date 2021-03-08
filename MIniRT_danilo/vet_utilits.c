/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vet_utilits.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrignon <dbrignon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 15:26:55 by dbrignon          #+#    #+#             */
/*   Updated: 2021/03/06 18:09:49 by dbrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minirt.h"

int		norma(t_vet *vettor)
{
	int 	rx;
	int		ry;
	int		rz;

	rx = vettor->x * vettor->x;
	ry = vettor->y * vettor->y;
	rz = vettor->z * vettor->z;
	return(rz + ry+ rz);
}

void	norma_vettori(t_vet *vettor)
{
	int res;

	res = norma(vettor);
	vettor->nx = vettor->x / res;
	vettor->ny = vettor->y / res;
	vettor->nz = vettor->z / res;
}