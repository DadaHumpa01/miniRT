/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   general.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrignon <dbrignon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 17:07:51 by dbrignon          #+#    #+#             */
/*   Updated: 2021/03/06 15:43:50 by dbrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minirt.h"

int		main(void)
{
	void	*mlx;
	void	*mlx_win;
	t_data	img;
	t_info	gen;
	t_vet	vettor;
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
			gen.r = (float)(i) / (float)(image_width);
			gen.g = (float)(j) / (float)(image_height);             
			gen.b = 0.25;
			gen.t = 0;
			asorteta = icolor(&gen);
			my_mlx_pixel_put(&img, j, i, asorteta);
        }
    }
	mlx_put_image_to_window(mlx, mlx_win, img.img, 0, 0);
	mlx_loop(mlx);
}