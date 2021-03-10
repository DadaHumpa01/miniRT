/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vet_utilits.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danilo <danilo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 15:26:55 by dbrignon          #+#    #+#             */
/*   Updated: 2021/03/09 17:45:58 by danilo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minirt.h"

int		dot_sfera(t_sfera *cerchio)
{
	int rx;
	int ry;
	int rz;

	rx = cerchio->
}

int		vec3_norma(t_vet *vettor)
{
	int 	rx;
	int		ry;
	int		rz;

	rx = vettor->x * vettor->x;
	ry = vettor->y * vettor->y;
	rz = vettor->z * vettor->z;
	return(rz + ry+ rz);
}

int		vec2_norma(t_vet *vettor)
{
	int rx;
	int ry;

	rx = vettor->x * vettor->x;
	ry = vettor->y * vettor->y;
	vettor->z = 0;
}

void	norma_vettori(t_vet *vettor, float res)
{
	vettor->nx = vettor->x / res;
	vettor->ny = vettor->y / res;
	vettor->nz = vettor->z / res;
}