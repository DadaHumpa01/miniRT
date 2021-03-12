/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danilo <danilo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 08:32:07 by danilo            #+#    #+#             */
/*   Updated: 2021/03/12 15:33:06 by danilo           ###   ########.fr       */
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
	t_ambiente		posto;
	t_proiettile	pistola;
	
	pistola.x = 0;
	pistola.y = 1;
	pistola.z = 0;
	pistola.vx = 1;
	pistola.vy = 1;
	pistola.vz = 0;
	posto.x = 0;
	posto.y = -1;
	posto.z = 0;
	posto.vx = -0.01;
	posto.vy = 0;
	posto.vz = 0;
	assegnazione_norm(&pistola, &posto, &ausiliario, &tuple);
	tupla_normalizzazone(&tuple, &ausiliario);
	pistola.vx = tuple.nx;
	pistola.vy = tuple.ny;
	pistola.vz = tuple.nz;
	printf("posizione attuale proiettile x = %f, y = %f z = %f\n", pistola.x, pistola.y, pistola.z);
	while (pistola.y >= 0)
	{
		tick(&pistola, &posto, &ausiliario, &tuple);
		printf("posizione attuale proiettile x = %f, y = %f z = %f\n", pistola.x, pistola.y, pistola.z);
	}
}