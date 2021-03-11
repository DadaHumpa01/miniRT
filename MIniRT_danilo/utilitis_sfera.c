/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilitis_sfera.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danilo <danilo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 08:38:36 by danilo            #+#    #+#             */
/*   Updated: 2021/03/10 10:10:15 by danilo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minirt.h"

void	calcoloL(t_vet *vettor, t_camera *cam, t_sfera *cerchio)
{
	vettor->x = cam->x - cerchio->x;
	vettor->y = cam->y - cerchio->y;
	vettor->z = cam->z - cerchio->z;
}

float	dot_sfera(t_vet *vettor, t_camera *cam, t_sfera *cerchio, int i)
{
	float dx;
	float dy;
	float dz;

	if (i == 1)
	{
		dx = cam->dx * cam->dx;
		dy = cam->dy * cam->dy;
		dz = cam->dz * cam->dz;
	}
	else if (i == 2)
	{
		dx = cam->dx * vettor->x;
		dy = cam->dy * vettor->y;
		dz = cam->dz * vettor->z;
	}
	else if (i == 3)
	{
		dx = vettor->x * vettor->x;
		dy = vettor->y * vettor->y;
		dz = vettor->z * vettor->z;
	}
	return (dx + dy + dz);
}

void	direzione_cerchio(t_vet *vettor, t_info *gen, t_camera *cam)
{
	float norma;

	vettor->x = vettor->x - cam->x;
	vettor->y = vettor->y - cam->y;
	vettor->z = cam->zoom - cam->z;
	norma = vec3_norma(vettor);
	norma_vettori(vettor, norma);
	cam->dx = vettor->nx;
	cam->dy = vettor->ny;
	cam->dz = vettor->nz;
}
