/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sfera.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danilo <danilo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 17:21:59 by danilo            #+#    #+#             */
/*   Updated: 2021/03/11 18:15:03 by danilo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minirt.h"

void	inializzazione(t_vet *vettor)
{
	vettor->x = 500;
	vettor->y = 300;
    vettor->z = 699;
	vettor->r = 200;
}

int		circonferenza(t_vet *vettor, int i, int j, int z)
{
	int resa;
	int resb;
    int resc;
	int confronto;

	resa = ((j * j) + (-2 * j * vettor->x) + (vettor->x * vettor->x));
	resb = ((i * i) + (-2 * i * vettor->y) + (vettor->y * vettor->y));
    resc = ((z * z) + (-2 * z * vettor->z) + (vettor->z * vettor->z));
	confronto = resa + resb + resc;
	if (confronto + vettor->r >= (vettor->r * vettor->r) && (confronto - vettor->r <= (vettor->r * vettor->r)))
		return (1);
	return(0);
}

void	raytrace(t_vet *vettor, int i, int j, t_info *gen, int z)
{
	int res;

	res = circonferenza(vettor, i, j, z);
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
    float       profondita = 500;
	mlx = mlx_init();
	mlx_win = mlx_new_window(mlx, image_height, image_width, "Danilo!");
	img.img = mlx_new_image(mlx, image_height, image_width);
	img.addr = mlx_get_data_addr(img.img, &img.bits_per_pixel, &img.line_length, &img.endian);
	inializzazione(&vettor);
    for (int z = 0; profondita + 1!= z; z++)
    {
        for (int j = image_height-1; j >= 0; --j)
        {
            for (int i = 0; i < image_width; ++i)
            {
                raytrace(&vettor, i, j, &gen, z);
                asorteta = icolor(&gen);
                my_mlx_pixel_put(&img, j, i, asorteta);
            }
        }
        printf("valore z attuale: %d\n", z);
    }
    printf("finito\n");
	mlx_put_image_to_window(mlx, mlx_win, img.img, 0, 0);
	mlx_loop(mlx);
}