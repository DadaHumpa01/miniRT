/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrici_comp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danilo <danilo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 08:57:12 by danilo            #+#    #+#             */
/*   Updated: 2021/03/14 19:34:40 by danilo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "matrice.h"

void	assegnazione_mat2_aux(t_matrici *matrix, t_assegnazione *assign)
{
	matrix->mat2a[0][0] = 1;
	matrix->mat2a[0][1] = 2;
	matrix->mat2a[1][0] = 2;
	matrix->mat2a[1][1] = 4;
}

void	matrice_trasport_b_a(t_matrici *matrix)
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

int		matrice2_cmp(t_matrici *matrix)
{
	if (matrix->mat2[0][0] == matrix->mat2a[0][0] && matrix->mat2[0][1] == matrix->mat2a[0][1])
	{
		if (matrix->mat2[1][0] == matrix->mat2a[1][0] && matrix->mat2[1][1] == matrix->mat2a[1][1])
			return (1);
	}
	return (0);
}

int		matrice3_cmp(t_matrici *matrix)
{
	if (matrix->mat3[0][0] != matrix->mat3a[0][0] || matrix->mat3[0][1] != matrix->mat3a[0][1])
		return (0);
	if (matrix->mat3[0][2] != matrix->mat3a[0][2] || matrix->mat3[1][0] != matrix->mat3a[1][0])
		return (0);
	if (matrix->mat3[1][1] != matrix->mat3a[1][1] || matrix->mat3[1][2] != matrix->mat3a[1][2])
		return (0);
	if (matrix->mat3[2][0] != matrix->mat3a[2][0] || matrix->mat3[2][1] != matrix->mat3a[2][1])
		return (0);
	if (matrix->mat3[2][2] != matrix->mat3a[2][2])
		return (0);
	return (1);
}

int		matrice4_cmp(t_matrici *matrix)
{
	int i;
	int j;

	i = 0;
	while (i != 4)
	{
		j = 0;
		while (j != 4)
		{
			if (matrix->mat4[i][j] != matrix->mat4a[i][j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}