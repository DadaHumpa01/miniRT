/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrice_sottomatrice.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danilo <danilo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 13:09:27 by danilo            #+#    #+#             */
/*   Updated: 2021/03/13 14:24:32 by danilo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "matrice.h"

void	sottomatrice3_3(t_matrici *matrix, int a, int b, int c)
{
	int r;
	int i;
	int o;

	o = 0;
	while (c != 3)
	{
		if (c == a)
			c++;
		else
		{		
			r = 0;
			i = 0;
			while (r != 3)
			{
				if (r == b)
					r++;
				else				
					matrix->mat2[o][i++] = matrix->mat3[c][r++];
			}
			o++;
			c++;
		}
	}
}

void	sottomatrice4_4(t_matrici *matrix, int a, int b, int c)
{
	int r;
	int i;
	int o;

	o = 0;
	while (c != 4)
	{
		if (c == a)
			c++;
		else
		{		
			r = 0;
			i = 0;
			while (r != 4)
			{
				if (r == b)
					r++;
				else				
					matrix->mat3[o][i++] = matrix->mat4[c][r++];
			}
			o++;
			c++;
		}
	}
}