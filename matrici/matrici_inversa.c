/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrici_inversa.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danilo <danilo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 20:47:43 by danilo            #+#    #+#             */
/*   Updated: 2021/03/15 11:55:38 by danilo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "matrice.h"

void	moltiplicazione_inv(t_matrici *matrix)
{
	int c;
	int r;
	int res;

	c = 0;
	res = matrice_determinante4_4(matrix);
	while (c != 4)
	{
		r = 0;
		while (r != 4)
		{
			matrix->mat4a[c][r] = matrix->mat4a[c][r] / res;
			r++;
		}
		c++;
	}
}

void	inversione_effettiva(t_matrici *matrix)
{
	int c;
	int r;
	int a;

	c = 0;
	while (c != 4)
	{
		r = 0;
		while (r != 4)
		{
			sottomatrice4_4(matrix, c, r, 0);
			if ((r + c) %2  == 0)
				matrix->mat4a[r][c] = matrice_determinante3_3(matrix);
			else
			{
				matrix->mat4a[r][c] = matrice_determinante3_3(matrix);
				matrix->mat4a[r][c] = matrix->mat4a[r][c] * -1;
			}
			r++;
		}
		c++;
	}
}

void	matrici_inversa4_4(t_matrici *matrix)
{
	//if (matrice_determinante4_4(matrix) == 0)
	//	return ;
	//else
	//{	
		inversione_effettiva(matrix);
		moltiplicazione_inv(matrix);
	//}
}