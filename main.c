/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrignon <dbrignon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 08:32:07 by danilo            #+#    #+#             */
/*   Updated: 2021/03/22 15:01:06 by dbrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tupla.h"

int 	main(void)
{
	int				res;
	int 			x;
	int				y;
	float			wall;
	float			pixel_size;
	float			word_y;
	float			word_x;
	float			meta;
	t_aux 			ausiliario;				//struttura che viene usata come ausilio della principale per le operazioni
	t_tupla			tuple;					//struttura che contiene tutti i dati generali
	t_colori		color;
	t_coloreaux		coloraux;
	t_matrici		matrix;
	t_assegnazione	assign;
	t_sfera			sphere;

	/*
	creazione_punto_sfera(0, -1, 0, &sphere);
	creazione_vettore_dir_sfera(0, 0, 1, &sphere);
	punti_intersezione(&sphere);
	res = sfera_instersezioni(&sphere);
	printf("ritorno 1: %f, ritorno 2: %f\n", sphere.t1, sphere.t2);
	printf("ritorno intersezione:-* %d\n", res);
	*/
	wall = 7.0;
	meta = wall / 2;
	pixel_size = wall / 101;
	x = 0;
	while (x != 101)
	{
		y = 0;
		word_x = meta - pixel_size * x;
		while (y != 101)
		{
			word_y = -meta + pixel_size * y;
			creazione_punto_sfera(word_x, word_y, wall, &sphere);
			tuple.x = word_x - 0;
			tuple.y = word_y - 0;
			tuple.z = wall - (-5);
			tupla_normalizzazone(&tuple, &ausiliario);
			creazione_vettore_dir_sfera(tuple.nx, tuple.ny, tuple.nz, &sphere);
			punti_intersezione(&sphere);
			res = sfera_instersezioni(&sphere);
			if (res > 0)
				printf("#");
			else
				printf(" ");
			y++;
		}
		printf("nuova linea\n");
		x++;
	}
}