/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrici_traspportazione.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danilo <danilo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 12:00:43 by danilo            #+#    #+#             */
/*   Updated: 2021/03/13 12:14:23 by danilo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "matrice.h"

void	matrice_riassign_ba(t_matrici *matrix)
{
	matrix->mat4[0][0] = matrix->mat4a[0][0];
	matrix->mat4[0][1] = matrix->mat4a[0][1];
	matrix->mat4[0][2] = matrix->mat4a[0][2];
	matrix->mat4[0][3] = matrix->mat4a[0][3];
	matrix->mat4[1][0] = matrix->mat4a[1][0];
	matrix->mat4[1][1] = matrix->mat4a[1][1];
	matrix->mat4[1][2] = matrix->mat4a[1][2];
	matrix->mat4[1][3] = matrix->mat4a[1][3];
	matrix->mat4[2][0] = matrix->mat4a[2][0];
	matrix->mat4[2][1] = matrix->mat4a[2][1];
	matrix->mat4[2][2] = matrix->mat4a[2][2];
	matrix->mat4[2][3] = matrix->mat4a[2][3];
	matrix->mat4[3][0] = matrix->mat4a[3][0];
	matrix->mat4[3][1] = matrix->mat4a[3][1];
	matrix->mat4[3][2] = matrix->mat4a[3][2];
	matrix->mat4[3][3] = matrix->mat4a[3][3];
}

void	matrice_trapostazione(t_matrici *matrix)
{
	matrix->mat4a[0][0] = matrix->mat4[0][0];
	matrix->mat4a[0][1] = matrix->mat4[1][0];
	matrix->mat4a[0][2] = matrix->mat4[2][0];
	matrix->mat4a[0][3] = matrix->mat4[3][0];
	matrix->mat4a[1][0] = matrix->mat4[0][1];
	matrix->mat4a[1][1] = matrix->mat4[1][1];
	matrix->mat4a[1][2] = matrix->mat4[2][1];
	matrix->mat4a[1][3] = matrix->mat4[3][1];
	matrix->mat4a[2][0] = matrix->mat4[0][2];
	matrix->mat4a[2][1] = matrix->mat4[1][2];
	matrix->mat4a[2][2] = matrix->mat4[2][2];
	matrix->mat4a[2][3] = matrix->mat4[3][2];
	matrix->mat4a[3][0] = matrix->mat4[0][3];
	matrix->mat4a[3][1] = matrix->mat4[1][3];
	matrix->mat4a[3][2] = matrix->mat4[2][3];
	matrix->mat4a[3][3] = matrix->mat4[3][3];
	matrice_riassign_ba(matrix);
}