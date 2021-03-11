/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danilo <danilo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 17:21:03 by danilo            #+#    #+#             */
/*   Updated: 2021/03/11 17:21:14 by danilo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCT_H
# define STRUCT_H

typedef struct	s_info {
	float 		r;
	float 		g;	
	float 		b;
	float 		t;
}				t_info;

typedef struct s_vet{
	float		x;
	float		y;
	float		z;
	float		r;
	float		dx;
	float		dy;
	float		dz;
	float		nx;
	float		ny;
	float		nz;
}				t_vet;

#endif