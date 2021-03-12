/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danilo <danilo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 08:32:07 by danilo            #+#    #+#             */
/*   Updated: 2021/03/12 16:29:58 by danilo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tupla.h"

int 	main(void)
{
	double res;
	t_aux 			ausiliario;				//struttura che viene usata come ausilio della principale per le operazioni
	t_tupla			tuple;					//struttura che contiene tutti i dati generali
	t_colori		color;
	t_coloreaux		coloraux;
	void		*mlx;
	void		*mlx_win;
	t_data		img;
	int			asorteta;
	float		image_width = 600;
	float 		image_height = 1000;
	mlx = mlx_init();
	mlx_win = mlx_new_window(mlx, image_height, image_width, "Danilo!");
	img.img = mlx_new_image(mlx, image_height, image_width);
	img.addr = mlx_get_data_addr(img.img, &img.bits_per_pixel, &img.line_length, &img.endian);
	for (int j = image_height-1; j >= 0; --j)
	{
		for (int i = 0; i < image_width; ++i)
		{
			my_mlx_pixel_put(&img, j, i, 0x00000000);
        }
    }
	mlx_put_image_to_window(mlx, mlx_win, img.img, 0, 0);
	mlx_loop(mlx);
}