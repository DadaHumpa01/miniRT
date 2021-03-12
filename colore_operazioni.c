/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colore_operazioni.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danilo <danilo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 15:57:06 by danilo            #+#    #+#             */
/*   Updated: 2021/03/12 16:14:38 by danilo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tupla.h"

void	colori_addizone(t_colori *color, t_coloreaux *coloraux)
{
	color->r = color->r + coloraux->r;
	color->g = color->g + coloraux->g;
	color->b = color->b + coloraux->b;
}

void	colori_sottrazione(t_colori *color, t_coloreaux *coloraux)
{
	color->r = color->r - coloraux->r;
	color->g = color->g - coloraux->g;
	color->b = color->b - coloraux->b;
}

void	colore_dot_scalare(t_colori *color, float num)
{
	color->r = color->r * num;
	color->g = color->g * num;
	color->b = color->b * num;
}

void	colore_dot(t_colori *color, t_coloreaux *coloraux)
{
	color->r = color->r * coloraux->r;
	color->g = color->g * coloraux->g;
	color->b = color->b * coloraux->b;
}