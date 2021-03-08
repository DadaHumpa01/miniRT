/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minirt.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrignon <dbrignon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 17:08:09 by dbrignon          #+#    #+#             */
/*   Updated: 2021/03/06 15:43:31 by dbrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINIRT_H
# define MINIRT_H

# include <mlx.h>
# include <math.h>
# include <unistd.h>

typedef struct	s_data {
	void		*img;
	char		*addr;
	int			bits_per_pixel;
	int			line_length;
	int			endian;
}				t_data;

typedef struct	s_vet {
	float 		x;
	float		y;
	float		z;
	float		nx;
	float		ny;
	float		nz;
}				t_vet;


typedef struct	s_info {
	float		x;
	float		y;
	float		z;
	float		r;
	float		g;
	float		b;
	float		t;
	float		c_x;
	float		c_y;
}				t_info;

int				create_trgb(int t, int r, int g, int b);
void			my_mlx_pixel_put(t_data *data, int x, int y, int color);
int 			icolor(t_info *gen);
int				norma(t_vet *vettor);
void			norma_vettori(t_vet *vettor);
#endif