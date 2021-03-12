/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danilo <danilo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 08:32:07 by danilo            #+#    #+#             */
/*   Updated: 2021/03/12 12:55:56 by danilo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tupla.h"

int main(void)
{
	double res;
	t_aux 	ausiliario;				//struttura che viene usata come ausilio della principale per le operazioni
	t_tupla	tuple;					//struttura che contiene tutti i dati generali
	
	tupla_vettore(2, 3, 4, &tuple);
	aux_vettore(1, 2, 3, &ausiliario);
	tupla_normalizzazone(&tuple, &ausiliario);
	tupla_dot_cross(&tuple, &ausiliario);
	printf("norma = %f\n", res);
	printf("x = %f, y = %f, z = %f, w = %f\n", tuple.px, tuple.py, tuple.pz, tuple.w);
	if (tuple.w == 1)
		printf("punto");
	else if (tuple.w == 0)
		printf("vettore");
	else
		printf("indefinito");
}