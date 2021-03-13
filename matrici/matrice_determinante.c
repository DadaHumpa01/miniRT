/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrice_determinante.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danilo <danilo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 12:56:01 by danilo            #+#    #+#             */
/*   Updated: 2021/03/13 17:55:10 by danilo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "matrice.h"

int		matrice_descriminante2(t_matrici *matrix)
{
	int a;
	int b;

	a = matrix->mat2[0][0] * matrix->mat2[1][1];
	b = matrix->mat2[0][1] * matrix->mat2[1][0];
	return (a - b);
}

int		matrice_minore2(t_matrici *matrix, int a, int b)
{
	int res;

	sottomatrice3_3(matrix, a, b, 0);
	res = matrice_descriminante2(matrix);
	return (res);
}

int		matrice_cofattore(t_matrici *matrix, int a, int b)
{
	int res;

	sottomatrice3_3(matrix, a, b, 0);
	res = matrice_descriminante2(matrix);
	if ((a + b) == 0 || (a + b) == 2 || (a + b) == 4)
		return (res);
	return (res * -1);
}

int		matrice_determinante3_3(t_matrici *matrix)
{
	int a;
	int b;
	int c;
	int res;

	a = matrice_cofattore(matrix, 0, 0);
	b = matrice_cofattore(matrix, 0, 1);
	c = matrice_cofattore(matrix, 0, 2);
	res = ((matrix->mat3[0][0] * a) + (matrix->mat3[0][1] * b) + (matrix->mat3[0][2] * c));
	return (res);
}

int		matrice_determinante4_4(t_matrici *matrix)
{
	int a;
	int b;
	int c;
	int d;
	int res;
	
	sottomatrice4_4(matrix, 0, 0, 0);
	a = matrice_determinante3_3(matrix);
	sottomatrice4_4(matrix, 0, 1, 0);
	b = matrice_determinante3_3(matrix);
	b = b * -1;
	sottomatrice4_4(matrix, 0, 2, 0);
	c = matrice_determinante3_3(matrix);
	sottomatrice4_4(matrix, 0, 3, 0);
	d = matrice_determinante3_3(matrix);
	d = d * -1;
	res = ((matrix->mat4[0][0] * a) + (matrix->mat4[0][1] * b) + (matrix->mat4[0][2] * c) + (matrix->mat4[0][3] * d));
	return (res);
}
