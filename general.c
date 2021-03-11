/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   general.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrignon	<danilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 17:07:51 by dbrignon          #+#    #+#             */
/*   Updated: 2021/03/09 14:29:58 by dbrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minirt.h"

void	impostazione_scena(t_camera *cam, t_sfera *cerchio)
{
	cam->x = 0.5;
	cam->y = 0.5;
	cam->z = 3.5;
	cam->dx = 0;
	cam->dy = 0;
	cam->dz = -1.;
	cam->zoom = 1;
	cerchio->x = 0.;
	cerchio->y = 0.;
	cerchio->z = 0.;

	cerchio->raggio = 0.3;
}

int		incognite(float a, float b, float c)
{
	float	delta;

	delta = b * b -4. * a * c;
	if (delta < 0)
		return (0);
	else if (delta == 0)
		return (1);
	else if (delta == 1)
		return (1);

}

//ritorna vero se trova un intersezione
int		intersezioni(t_sfera *cerchio, t_camera *cam, t_vet *vettor)
{
	float a;
	float b;
	float c;

	calcoloL(vettor, cam, cerchio);
	a = dot_vec3(cerchio, cam, 0);
	b = 2. * dot_sfera(vettor, cam, cerchio, 2);
	c = dot_sfera(vettor, cam, cerchio, 3) - pow(cerchio->raggio, 2.);
	if (incognite(a, b, c) == 1)
		return (1);
	return (0);
}

//funzione che ritorna il colore se cè il colore altrimenti il background
void	raytrace(t_sfera *cerchio, t_camera *cam, t_vet *vettor, t_info *gen)
{
	if (intersezioni(cerchio, cam, vettor) == 1)
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
	}
}

int		main(void)
{
	void		*mlx;
	void		*mlx_win;
	t_data		img;
	t_info		gen;
	t_vet		vettor;
	t_camera	cam;
	t_sfera		cerchio;
	int			asorteta;
	float		image_width = 600.;
	float 		image_height = 1000.;
	mlx = mlx_init();
	mlx_win = mlx_new_window(mlx, image_height, image_width, "Danilo!");
	img.img = mlx_new_image(mlx, image_height, image_width);
	img.addr = mlx_get_data_addr(img.img, &img.bits_per_pixel, &img.line_length,
					&img.endian);
	impostazione_scena(&cam, &cerchio);
	for (int j = image_height-1; j >= 0; --j)
	{
		for (int i = 0; i < image_width; ++i)
		{
			vettor.x = i / image_width -0.5;
			vettor.y = j / image_height -0.5;
			direzione_cerchio(&vettor, &gen, &cam);
			raytrace(&cerchio, &cam, &vettor, &gen);
			asorteta = icolor(&gen);
			my_mlx_pixel_put(&img, j, i, asorteta);
        }
    }
	mlx_put_image_to_window(mlx, mlx_win, img.img, 0, 0);
	mlx_loop(mlx);
}