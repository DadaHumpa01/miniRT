/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrici_assegnazioni.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danilo <danilo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 21:16:15 by danilo            #+#    #+#             */
/*   Updated: 2021/03/14 19:43:04 by danilo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "matrice.h"

void	assegnazione_mat4(t_matrici *matrix, t_assegnazione *assign)
{
	matrix->mat4[0][0] = 1;
	matrix->mat4[0][1] = 0;
	matrix->mat4[0][2] = 0;
	matrix->mat4[0][3] = 5;
	matrix->mat4[1][0] = 0;
	matrix->mat4[1][1] = 1;
	matrix->mat4[1][2] = 0;
	matrix->mat4[1][3] = -3;
	matrix->mat4[2][0] = 0;
	matrix->mat4[2][1] = 0;
	matrix->mat4[2][2] = 1;
	matrix->mat4[2][3] = 2;
	matrix->mat4[3][0] = 0;
	matrix->mat4[3][1] = 0;
	matrix->mat4[3][2] = 0;
	matrix->mat4[3][3] = 1;
}

void	assegnazione_mat4_aux(t_matrici *matrix, t_assegnazione *assign)
{
	matrix->mat4a[0][0] = 3;
	matrix->mat4a[0][1] = -9;
	matrix->mat4a[0][2] = 7;
	matrix->mat4a[0][3] = 3;
	matrix->mat4a[1][0] = 3;
	matrix->mat4a[1][1] = -8;
	matrix->mat4a[1][2] = 2;
	matrix->mat4a[1][3] = -9;
	matrix->mat4a[2][0] = -4;
	matrix->mat4a[2][1] = 4;
	matrix->mat4a[2][2] = 4;
	matrix->mat4a[2][3] = 1;
	matrix->mat4a[3][0] = -6;
	matrix->mat4a[3][1] = 5;
	matrix->mat4a[3][2] = -1;
	matrix->mat4a[3][3] = 1;
}

void	assegnazione_mat3(t_matrici *matrix, t_assegnazione *assign)
{
	matrix->mat3[0][0] = 1;
	matrix->mat3[0][1] = 2;
	matrix->mat3[0][2] = 6;
	matrix->mat3[1][0] = -5;
	matrix->mat3[1][1] = 8;
	matrix->mat3[1][2] = -4;
	matrix->mat3[2][0] = 2;
	matrix->mat3[2][1] = 6;
	matrix->mat3[2][2] = 4;
}

void	assegnazione_mat3_aux(t_matrici *matrix, t_assegnazione *assign)
{
	matrix->mat3a[0][0] = 1;
	matrix->mat3a[0][1] = 2;
	matrix->mat3a[0][2] = 3;
	matrix->mat3a[1][0] = 4;
	matrix->mat3a[1][1] = 9;
	matrix->mat3a[1][2] = 6;
	matrix->mat3a[2][0] = 7;
	matrix->mat3a[2][1] = 8;
	matrix->mat3a[2][2] = 9;
}

void	assegnazione_mat2(t_matrici *matrix, t_assegnazione *assign)
{
	matrix->mat2[0][0] = 1;
	matrix->mat2[0][1] = 5;
	matrix->mat2[1][0] = -3;
	matrix->mat2[1][1] = 2;
}