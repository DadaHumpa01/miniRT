/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danilo <danilo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 19:04:44 by danilo            #+#    #+#             */
/*   Updated: 2021/03/12 19:35:10 by danilo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strct.h"

int main(void)
{
	t_matrice matrix;

	/* prima linea*/

	matrix.tab[0][0] = 1;
	matrix.tab[0][1] = 2;
	matrix.tab[0][2] = 3;
	matrix.tab[0][3] = 4;
	
	/* seconda linea */

	matrix.tab[1][0] = 5;
	matrix.tab[1][1] = 6;
	matrix.tab[1][2] = 7;
	matrix.tab[1][3] = 8;

	/* terza linea */

	matrix.tab[2][0] = 9;
	matrix.tab[2][1] = 10;
	matrix.tab[2][2] = 11;
	matrix.tab[2][3] = 12;

	/* quarta linea */

	matrix.tab[3][0] = 13;
	matrix.tab[3][1] = 14;
	matrix.tab[3][2] = 15;
	matrix.tab[3][3] = 16;
	
	printf("%d\t %d\t %d\t %d\n\n", matrix.tab[0][0], matrix.tab[0][1], matrix.tab[0][2], matrix.tab[0][3]);
	printf("%d\t %d\t %d\t %d\n\n", matrix.tab[1][0], matrix.tab[1][1], matrix.tab[1][2], matrix.tab[1][3]);
	printf("%d\t %d\t %d\t %d\n\n", matrix.tab[2][0], matrix.tab[2][1], matrix.tab[2][2], matrix.tab[2][3]);
	printf("%d\t %d\t %d\t %d\n", matrix.tab[3][0], matrix.tab[3][1], matrix.tab[3][2], matrix.tab[3][3]);
	return (0);
}