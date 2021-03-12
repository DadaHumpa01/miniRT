/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colore.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danilo <danilo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 15:52:03 by danilo            #+#    #+#             */
/*   Updated: 2021/03/12 16:15:02 by danilo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tupla.h"

void	mixer(float r, float g, float b, t_colori *color)
{
	color->r = r;
	color->g = g;
	color->g = b;
}

void	mixer_aux(float r, float g, float b, t_coloreaux *coloraux)
{
	coloraux->r = r;
	coloraux->g = g;
	coloraux->g = b;
}