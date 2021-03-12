/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danilo <danilo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 08:32:07 by danilo            #+#    #+#             */
/*   Updated: 2021/03/12 18:18:58 by danilo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tupla.h"

void	assegnazione_norm(t_proiettile *pistola, t_ambiente *posto, t_aux *ausiliario, t_tupla *tuple)
{
	tuple->x = pistola->vx;
	tuple->y = pistola->vy;
	tuple->z = pistola->vz;
}

void	tick(t_proiettile *pistola, t_ambiente *posto, t_aux *ausiliario, t_tupla *tuple)
{
	pistola->x = pistola->x + pistola->vx;
	pistola->y = pistola->y + pistola->vy;
	pistola->z = pistola->z + pistola->vz;
	pistola->vx = pistola->vx + posto->x + posto->vx;
	pistola->vy = pistola->vy + posto->y + posto->vy;
	pistola->vz = pistola->vz + posto->y + posto->vz;
}

int 	main(void)
{
	double res;
	t_aux 			ausiliario;				//struttura che viene usata come ausilio della principale per le operazioni
	t_tupla			tuple;					//struttura che contiene tutti i dati generali
	t_colori		color;
	t_coloreaux		coloraux;
	t_proiettile	pistola;
	t_ambiente		posto;
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
			asorteta = create_trgb(0, 0, 0, 0);
			my_mlx_pixel_put(&img, j, i, asorteta);
        }
    }
	asorteta = create_trgb(0, 255, 0, 0);
	pistola.x = 0;
	pistola.y = 1;
	pistola.z = 0;
	pistola.vx = 1;
	pistola.vy = 1;
	pistola.vz = 0;
	posto.x = 0;
	posto.y = -0.01;
	posto.z = 0;
	posto.vx = -0.01;
	posto.vy = 0;
	posto.vz = 0;
	assegnazione_norm(&pistola, &posto, &ausiliario, &tuple);
	tupla_normalizzazone(&tuple, &ausiliario);
	pistola.vx = tuple.nx;
	pistola.vy = tuple.ny;
	pistola.vz = tuple.nz;
	my_mlx_pixel_put(&img, (int)(pistola.z * -1), (int)(image_width - pistola.x), asorteta);
	printf("posizione attuale proiettile x = %d, y = %d z = %d\n", (int)(image_width- pistola.x), (int)(pistola.y), (int)(pistola.z));
	while (pistola.y > 0.9)
	{
		tick(&pistola, &posto, &ausiliario, &tuple);
		my_mlx_pixel_put(&img, (int)(pistola.z * -1), (int)(image_width - pistola.x), asorteta);
		printf("posizione attuale proiettile x = %d, y = %d z = %d\n", (int)(image_width -pistola.x), (int)(pistola.y ), (int)(pistola.z));
	}
	mlx_put_image_to_window(mlx, mlx_win, img.img, 0, 0);
	mlx_loop(mlx);
}