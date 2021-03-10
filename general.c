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

void	impostazione_scena(t_camera *cam, t_sfera *cerchio)     //setup scena iniziale
{
	/*camera posizionamento iniziale */
	cam->x = 10;
	cam->y = 20;
	cam->z = 50;
	/*		direzione camera 		 */
	cam->dx = 0;
	cam->dy = 0;
	cam->dz = 0;
	/*				zoom			*/
	cam->zoom = 0;
	/*				sfera			*/
	cerchio->x = 0;
	cerchio->y = 0;
	cerchio->z = 0;

	cerchio->raggio = 0;
}

//ritorna vero se trova un intersezione
int		intersezioni(t_sfera *cerchio, t_camera *cam, t_vet *vettor)
{
	float a;
	float b;

	a = vec3_norma(t_vet)
}

//funzione che ritorna il colore se cè il colore altrimenti il background
int		raytrace(t_sfera *cerchio, t_camera *cam, t_vet *vettor)
{
	if (intersezioni(cerchio, cam, vettor) == 1)
	{
		return (0x00FFFFFF);
	}
	return (0x00000000);
}

//serve a calcolare la direzione del cerchio 
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
	int 		image_width = 600;
	int 		image_height = 1000;
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
			vettor.x = i / image_width;
			vettor.y = j / image_height;
			direzione_cerchio(&vettor, &gen, &cam);
			gen.r = 0;
			gen.g = 0,          
			gen.b = 1;
			gen.t = 0;
			asorteta = icolor(&gen);
			my_mlx_pixel_put(&img, j, i, asorteta);
        }
    }
	mlx_put_image_to_window(mlx, mlx_win, img.img, 0, 0);
	mlx_loop(mlx);
}