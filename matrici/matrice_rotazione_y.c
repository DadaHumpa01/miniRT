/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrice_rotazione_y.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danilo <danilo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 12:52:53 by danilo            #+#    #+#             */
/*   Updated: 2021/03/15 13:23:19 by danilo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "matrice.h"

void	inilizzazione_mat4_assey(t_matrici *matrix)
{
	matrix->mat4[0][0] = 0;
	matrix->mat4[0][1] = 0;
	matrix->mat4[0][2] = 0;
	matrix->mat4[0][3] = 0;
	matrix->mat4[1][0] = 0;
	matrix->mat4[1][1] = 1;
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

void	rotazione_asse_y(float radianti, t_matrici *matrix)
{
	inilizzazione_mat4_assey(matrix);
	matrix->mat4[0][0] = cos(radianti);
	matrix->mat4[2][0] = sin(radianti);
	matrix->mat4[2][0] = matrix->mat4[2][0] * -1;
	matrix->mat4[0][2] = sin(radianti);
	matrix->mat4[2][2] = cos(radianti);
	matrice_tupla_matrix(matrix);
}