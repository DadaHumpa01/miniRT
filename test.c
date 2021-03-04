/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrignon <dbrignon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 14:29:22 by dbrignon          #+#    #+#             */
/*   Updated: 2021/03/04 17:40:14 by dbrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mlx.h>
#include "minirt.h"

int		create_trgb(int t, int r, int g, int b)
{
	return (t << 24 | r << 16 | g << 8 | b);
}

void			my_mlx_pixel_put(t_data *data, int x, int y, int color)
{
	char	*dst;

	dst = data->addr + (y * data->line_length + x * (data->bits_per_pixel / 8));
	*(unsigned int*)dst = color;
}

int			main(void)
{
	void	*mlx;
	void	*mlx_win;
	t_data	img;
	int		x;
	int		y;
	int asorteta;
	int image_width = 1200;
	int image_height = 2000;

	x = 100;
	mlx = mlx_init();
	mlx_win = mlx_new_window(mlx, 2000, 1200, "Danilo!");
	img.img = mlx_new_image(mlx, 2000, 1200);
	img.addr = mlx_get_data_addr(img.img, &img.bits_per_pixel, &img.line_length,
					&img.endian);
	for (int j = image_height-1; j >= 0; --j)
	{
		for (int i = 0; i < image_width; ++i)
		{
			float r = (float)(i) / (float)(image_width);
            float g = (float)(j) / (float)(image_height);             
            float b = 0.25;

            int ir = (int)(255.999 * r);
            int ig = (int)(255.999 * g);
			int ib = (int)(255.999 * b);
			asorteta = create_trgb(0, ir, ig, ib);
			my_mlx_pixel_put(&img, j, i, asorteta);
        }
    }
	mlx_put_image_to_window(mlx, mlx_win, img.img, 0, 0);
	mlx_loop(mlx);
}