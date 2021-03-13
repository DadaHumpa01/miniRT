/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrici_dot.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danilo <danilo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 09:56:04 by danilo            #+#    #+#             */
/*   Updated: 2021/03/13 11:51:59 by danilo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "matrice.h"

void	molt(int a, int b, t_matrici *matrix)
{
	int x;
	
	x = 0;

	printf("sono entrato");
	matrix->mat4p[a][b] = 0;
	while (x != 4)
	{
		matrix->mat4p[a][b] += matrix->mat4[a][x] * matrix->mat4a[x][b];
		x++;
	}
}

void	matrice4_dot_ab(t_matrici *matrix)
{
	int a;
	int b;
	
	a = 0;
	while (a != 4)
	{
		b = 0;
		while (b != 4)
		{
			molt(a, b, matrix);
			b++;
		}
		a++;
	}
}

void	create_matrix_tupla(t_matrici *matrix, t_assegnazione *assign)
{
	matrix->mat4a[0][0] = assign->x;
	matrix->mat4a[0][1] = assign->y;
	matrix->mat4a[0][2] = assign->z;
	matrix->mat4a[0][3] = assign->w;
}

void	matrice_tupla(t_matrici *matrix, t_assegnazione *assign)
{
	int a;
	int x;

	a = 0;
	create_matrix_tupla(matrix, assign);
	while (a != 4)
	{
		matrix->mat4p[0][a] = 0;
		x = 0;
		while (x != 4)
		{
			matrix->mat4p[0][a] += matrix->mat4[a][x] * matrix->mat4a[0][x];
			x++;
		}
		a++;
	}
}