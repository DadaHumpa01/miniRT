/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   restart.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danilo <danilo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 18:31:39 by danilo            #+#    #+#             */
/*   Updated: 2021/03/11 17:07:31 by danilo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minirt.h"

void	inializzazione(t_vet *vettor)
{
	vettor->x = 500;
	vettor->y = 300;
	vettor->z = 100;
}

int		circonferenza(t_vet *vettor, int i, int j)
{
	int resa;
	int resb;
	int confronto;

	resa = ((j * j) + (-2 * j * vettor->x) + (vettor->x * vettor->x));
	resb = ((i * i) + (-2 * i * vettor->y) + (vettor->y * vettor->y));
	confronto = resa + resb;
	if (confronto + vettor->z <= (vettor->z * vettor->z) && (confronto - vettor->z <= (vettor->z * vettor->z)))
		return (1);
	return(0);
}

void	raytrace(t_vet *vettor, int i, int j, t_info *gen)
{
	int res;

	res = circonferenza(vettor, i, j);
	if (res == 1)
	{
		gen->r = 1;
		gen->g = 1;
		gen->b = 1;
		return ;
	}
	else 
	{
		gen->r = 0;
		gen->g = 0;
		gen->b = 0;
		return ;
	}
}

int	main(void)
{
	void		*mlx;
	void		*mlx_win;
	t_data		img;
	t_info		gen;
	t_vet		vettor;
	int			asorteta;
	float		image_width = 600;
	float 		image_height = 1000;
	mlx = mlx_init();
	mlx_win = mlx_new_window(mlx, image_height, image_width, "Danilo!");
	img.img = mlx_new_image(mlx, image_height, image_width);
	img.addr = mlx_get_data_addr(img.img, &img.bits_per_pixel, &img.line_length, &img.endian);
	inializzazione(&vettor);
	for (int j = image_height-1; j >= 0; --j)
	{
		for (int i = 0; i < image_width; ++i)
		{
			raytrace(&vettor, i, j, &gen);
			asorteta = icolor(&gen);
			my_mlx_pixel_put(&img, j, i, asorteta);
        }
    }
	mlx_put_image_to_window(mlx, mlx_win, img.img, 0, 0);
	mlx_loop(mlx);
}