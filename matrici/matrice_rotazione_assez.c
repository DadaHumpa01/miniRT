/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrice_rotazione_assez.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danilo <danilo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 12:56:29 by danilo            #+#    #+#             */
/*   Updated: 2021/03/15 13:51:07 by danilo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "matrice.h"

void	assegnazione_mat4_z(t_matrici *matrix)
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
	matrix->mat4[2][2] = 1;
	matrix->mat4[2][3] = 0;
	matrix->mat4[3][0] = 0;
	matrix->mat4[3][1] = 0;
	matrix->mat4[3][2] = 0;
	matrix->mat4[3][3] = 1;	
}

void	rotazione_asse_z(float radianti, t_matrici *matrix)
{
	assegnazione_mat4_z(matrix);
	matrix->mat4[0][0] = cos(radianti);
	matrix->mat4[0][1] = sin(radianti);
	matrix->mat4[0][1] = matrix->mat4[0][1] * -1;
	matrix->mat4[1][0] = sin(radianti);
	matrix->mat4[1][1] = cos(radianti);
	matrice_tupla_matrix(matrix);
}