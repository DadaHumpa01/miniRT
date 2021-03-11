/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vet_utilits.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danilo <danilo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 15:26:55 by dbrignon          #+#    #+#             */
/*   Updated: 2021/03/10 10:04:57 by danilo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minirt.h"

float		dot_vec3(t_sfera *cerchio, t_camera *cam, int i)
{
	float	rx;
	float	ry;
	float	rz;
	
	if (i == 1)
	{	
		rx = cerchio->x * cerchio->x;
		ry = cerchio->y * cerchio->y;
		rz = cerchio->z * cerchio->z;
	}
	else if (i == 0)
	{
		rx = cam->dx * cam->dx;
		ry = cam->dy * cam->dy;
		rz = cam->dz * cam->dz;
	}
	return (rx + ry + rz);
}

float		vec3_norma(t_vet *vettor)
{
	float	rx;
	float	ry;
	float	rz;

	rx = vettor->x * vettor->x;
	ry = vettor->y * vettor->y;
	rz = vettor->z * vettor->z;
	return(rz + ry+ rz);
}

void	norma_vettori(t_vet *vettor, float res)
{
	vettor->nx = vettor->x / res;
	vettor->ny = vettor->y / res;
	vettor->nz = vettor->z / res;
}