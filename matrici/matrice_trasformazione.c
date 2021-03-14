/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrice_trasformazione.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danilo <danilo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 11:46:46 by danilo            #+#    #+#             */
/*   Updated: 2021/03/14 19:59:36 by danilo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "matrice.h"

void	assegnazione_mat_trasform(t_matrici *matrix)
{
	matrix->mat4[0][0] = 1;
	matrix->mat4[0][1] = 0;
	matrix->mat4[0][2] = 0;
	matrix->mat4[0][3] = 0;
	matrix->mat4[1][0] = 0;
	matrix->mat4[1][1] = 1;
	matrix->mat4[1][2] = 0;
	matrix->mat4[1][3] = 0;
	matrix->mat4[2][0] = 0;
	matrix->mat4[2][1] = 0;
	matrix->mat4[2][2] = 1;
	matrix->mat4[2][3] = 0;
	matrix->mat4[3][0] = 0;
	matrix->mat4[3][1] = 0;
	matrix->mat4[3][2] = 0;
	matrix->mat4[3][3] = 1;
}

void	assign_valori(t_matrici *matrix)
{
	matrix->mat4a[0][0] = matrix->x;
	matrix->mat4a[0][1] = matrix->y;
	matrix->mat4a[0][2] = matrix->z;
	matrix->mat4a[0][3] = matrix->w;
}

void	matrice_tupla_matrix(t_matrici *matrix)
{
	int a;
	int x;

	a = 0;
	assign_valori(matrix);
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

void	trasformazione_point(float x, float y, float z, t_matrici *matrix)
{
	assegnazione_mat_trasform(matrix);
	matrix->mat4[0][3] = x;
	matrix->mat4[1][3] = y;
	matrix->mat4[2][3] = z;
	matrice_tupla_matrix(matrix);
}

void	trasformazione_inversa_point(float x, float y, float z, t_matrici *matrix)
{
	assegnazione_mat_trasform(matrix);
	matrix->mat4[0][3] = x;
	matrix->mat4[1][3] = y;
	matrix->mat4[2][3] = z;
	matrici_inversa4_4(matrix);
	matrice_trasport_b_a(matrix);
	matrice_tupla_matrix(matrix);
}