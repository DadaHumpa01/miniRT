/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilitis_monitor.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danilo <danilo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 17:20:47 by danilo            #+#    #+#             */
/*   Updated: 2021/03/11 17:20:50 by danilo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minirt.h"

int				create_trgb(int t, int r, int g, int b)
{
	return (t << 24 | r << 16 | g << 8 | b);
}

void			my_mlx_pixel_put(t_data *data, int x, int y, int color)
{
	char	*dst;

	dst = data->addr + (y * data->line_length + x * (data->bits_per_pixel / 8));
	*(unsigned int*)dst = color;
}

int 			icolor(t_info *gen)
{
	int ir;
	int ig;
	int ib;
	int it;
	int colore_esadecimale;

	ir = (int)(255.999 * gen->r);
	ig = (int)(255.999 * gen->g);
	ib = (int)(255.999 * gen->b);
	it = (int)(255.999 * gen->t);
	colore_esadecimale = create_trgb(it, ir, ig, ib);
	return (colore_esadecimale);
}