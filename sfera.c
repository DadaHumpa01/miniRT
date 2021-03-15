/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sfera.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danilo <danilo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 16:24:41 by danilo            #+#    #+#             */
/*   Updated: 2021/03/15 21:31:23 by danilo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tupla.h"

void	ray_to_sphere(t_sfera *sphere)
{
	sphere->rtsx = sphere->px - 0;
	sphere->rtsy = sphere->py - 0;
	sphere->rtsz = sphere->pz - 0;
	sphere->rtsw = 0;
}

double	assegnazione(t_sfera *sphere)
{
	double a;
	double b;
	double c;

	a = sphere->dx * sphere->dx;
	b = sphere->dy * sphere->dy;
	c = sphere->dz * sphere->dz;
	return (a + b + c);
}

double	assegnazione_b(t_sfera *sphere)
{
	double a;
	double b;
	double c;

	a = sphere->dx * sphere->rtsx;
	b = sphere->dy * sphere->rtsy;
	c = sphere->dz * sphere->rtsz;
	return (a + b + c);
}

double	assegnazione_c(t_sfera *sphere)
{
	double a;
	double b;
	double c;

	a = sphere->rtsx * sphere->rtsx;
	b = sphere->rtsy * sphere->rtsy;
	c = sphere->rtsz * sphere->rtsz;
	return (a + b + c);
}

double	delta(t_sfera *sphere)
{
	double a;
	double b;
	double c;
	
	ray_to_sphere(sphere);
	a = assegnazione(sphere);
	b = 2 * assegnazione_b(sphere);
	c = assegnazione_c(sphere) -1;
	return ((b * b) - (4 * a * c));
}

void	punti_intersezione(t_sfera *sphere)
{
	double a;
	double b;
	double c;
	double	res;

	ray_to_sphere(sphere);
	a = assegnazione(sphere);
	b = 2 * assegnazione_b(sphere);
	c = assegnazione_c(sphere) -1;
	res = delta(sphere);
	if (res < 0)
		return ;
	if (res == 0)
	{
		sphere->t1 = ((-b - sqrt(res)) / (2 * a));
		sphere->t2 = ((-b + sqrt(res)) / (2 * a));
	}
	if (res > 0)
	{
		sphere->t1 = ((-b - sqrt(res)) / (2 * a));
		sphere->t2 = ((-b + sqrt(res)) / (2 * a));
	}
}

void	creazione_punto_sfera(float x, float y, float z, t_sfera *sphere)
{
	sphere->px = x;
	sphere->py = y;
	sphere->pz = z;
	sphere->pw = 1;
}

void	creazione_vettore_dir_sfera(float x, float y, float z, t_sfera *sphere)
{
	sphere->dx = x;
	sphere->dy = y;
	sphere->dz = z;
	sphere->dw = 1;
}