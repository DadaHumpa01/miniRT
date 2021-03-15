/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrice_tosatura.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danilo <danilo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 15:00:00 by danilo            #+#    #+#             */
/*   Updated: 2021/03/15 16:11:25 by danilo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "matrice.h"

void	inilizazione_mat4_taglio(t_matrici *matrix)
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

void	matrice_taglio(t_matrici *matrix, t_assegnazione *assign)
{
	inilizazione_mat4_taglio(matrix);
	matrix->mat4[0][1] = assign->pb;
	matrix->mat4[0][2] = assign->pc;
	matrix->mat4[1][0] = assign->sa;
	matrix->mat4[1][2] = assign->sc;
	matrix->mat4[2][0] = assign->ta;
	matrix->mat4[2][1] = assign->tb;
	matrice_tupla_matrix(matrix);
}

void	taglio_assegnazione_helper_x_y(float x, float y, int help, t_assegnazione *assign)
{
	if (help == 1)
	{
		assign->pb = x;
		assign->sa = y;
		assign->pc = 0;
		assign->sc = 0;
		assign->ta = 0;
		assign->tb = 0;
	}
	else if (help == 2)
	{
		assign->pc = x;
		assign->sc = y;
		assign->pb = 0;
		assign->sa = 0;
		assign->ta = 0;
		assign->tb = 0;
	}
	else
		return ;
}

void	taglio_assegnazione_helper_z(float zx, float zy, t_assegnazione *assign)
{
	assign->ta = zx;
	assign->tb = zy;
	assign->pb = 0;
	assign->sa = 0;		
	assign->pc = 0;
	assign->sc = 0;		
}