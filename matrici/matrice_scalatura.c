/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrice_scalatura.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danilo <danilo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 20:02:35 by danilo            #+#    #+#             */
/*   Updated: 2021/03/15 08:31:51 by danilo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "matrice.h"

void	matrice_mat4_madre(t_matrici *matrix)
{
	matrix->mat4[0][0] = 0;
	matrix->mat4[0][1] = 0;
	matrix->mat4[0][2] = 0;
	matrix->mat4[0][3] = 0;
	matrix->mat4[1][0] = 0;
	matrix->mat4[1][1] = 0;
	matrix->mat4[1][2] = 0;
	matrix->mat4[1][3] = 0;
	matrix->mat4[2][0] = 0;
	matrix->mat4[2][1] = 0;
	matrix->mat4[2][2] = 0;
	matrix->mat4[2][3] = 0;
	matrix->mat4[3][0] = 0;
	matrix->mat4[3][1] = 0;
	matrix->mat4[3][2] = 0;
	matrix->mat4[3][3] = 1;	
}

void	riassegnazione_p_a(t_matrici *matrix)
{
	matrix->mat4[0][0] = matrix->mat4p[0][0];
	matrix->mat4[0][1] = matrix->mat4p[0][1];
	matrix->mat4[0][2] = matrix->mat4p[0][2];
	matrix->mat4[0][3] = matrix->mat4p[0][3];
	matrix->mat4[1][0] = matrix->mat4p[1][0];
	matrix->mat4[1][1] = matrix->mat4p[1][1];
	matrix->mat4[1][2] = matrix->mat4p[1][2];
	matrix->mat4[1][3] = matrix->mat4p[1][3];
	matrix->mat4[2][0] = matrix->mat4p[2][0];
	matrix->mat4[2][1] = matrix->mat4p[2][1];
	matrix->mat4[2][2] = matrix->mat4p[2][2];
	matrix->mat4[2][3] = matrix->mat4p[2][3];
	matrix->mat4[3][0] = matrix->mat4p[3][0];
	matrix->mat4[3][1] = matrix->mat4p[3][1];
	matrix->mat4[3][2] = matrix->mat4p[3][2];
	matrix->mat4[3][3] = matrix->mat4p[3][3];
}

void	ridimensionamento(float x, float y, float z, t_matrici *matrix)
{
	trasformazione_point(x, y, z, matrix);
	riassegnazione_p_a(matrix);
	matrix->mat4[1][1] = matrix->mat4[0][1];
	matrix->mat4[0][1] = 0;
	matrix->mat4[2][2] = matrix->mat4[0][2];
	matrix->mat4[0][2] = 0;
	matrix->mat4[0][3] = 0;
	matrix->mat4[3][3] = 1;
	matrice_tupla_matrix(matrix);
}