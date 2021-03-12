/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danilo <danilo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 08:32:07 by danilo            #+#    #+#             */
/*   Updated: 2021/03/12 11:11:42 by danilo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tupla.h"

int main(void)
{
	int res;
	t_aux 	ausiliario;				//struttura che viene usata come ausilio della principale per le operazioni
	t_tupla	tuple;					//struttura che contiene tutti i dati generali
	
	tupla_vettore(1, -2, 3, &tuple);
	tuple.w = -4;
	aux_vettore(1, -2, 3, &ausiliario);
	tupla_div_scalare(&tuple, &ausiliario, 2);
	printf("x = %f, y = %f, z = %f, w = %f\n", tuple.x, tuple.y, tuple.z, tuple.w);
	if (tuple.w == 1)
		printf("punto");
	else if (tuple.w == 0)
		printf("vettore");
	else
		printf("indefinito");
}