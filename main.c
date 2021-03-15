/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danilo <danilo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 08:32:07 by danilo            #+#    #+#             */
/*   Updated: 2021/03/15 21:33:33 by danilo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tupla.h"

int 	main(void)
{
	int				res;
	t_aux 			ausiliario;				//struttura che viene usata come ausilio della principale per le operazioni
	t_tupla			tuple;					//struttura che contiene tutti i dati generali
	t_colori		color;
	t_coloreaux		coloraux;
	t_matrici		matrix;
	t_assegnazione	assign;
	t_sfera			sphere;

	creazione_punto_sfera(0, 0, -5, &sphere);
	creazione_vettore_dir_sfera(0, 0, 1, &sphere);
	punti_intersezione(&sphere);
	printf("ritorno 1: %f, ritorno 2: %f", sphere.t1, sphere.t2);
}