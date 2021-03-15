/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrice_rotazione_x.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danilo <danilo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 11:23:08 by danilo            #+#    #+#             */
/*   Updated: 2021/03/15 12:58:55 by danilo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "matrice.h"

void	inilizzazione_mat4_assex(t_matrici *matrix)
{
	matrix->mat4[0][0] = 1;
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

void	rotazione_asse_x(float radianti, t_matrici *matrix)
{
	inilizzazione_mat4_assex(matrix);
	matrix->mat4[1][1] = cos(radianti);
	matrix->mat4[1][2] = sin(radianti);
	matrix->mat4[1][2] = matrix->mat4[1][2] * -1;
	matrix->mat4[2][1] = sin(radianti);
	matrix->mat4[2][2] = cos(radianti);
	matrice_tupla_matrix(matrix);
}

void	rotazione_asse_x_inv(float radianti, t_matrici *matrix)
{
	radianti = radianti * -1;
	inilizzazione_mat4_assex(matrix);
	matrix->mat4[1][1] = cos(radianti);
	matrix->mat4[1][2] = sin(radianti);
	matrix->mat4[1][2] = matrix->mat4[1][2] * -1;
	matrix->mat4[2][1] = sin(radianti);
	matrix->mat4[2][2] = cos(radianti);
	matrice_tupla_matrix(matrix);
}