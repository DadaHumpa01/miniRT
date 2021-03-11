/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minirt.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danilo <danilo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 17:08:09 by dbrignon          #+#    #+#             */
/*   Updated: 2021/03/10 10:28:07 by danilo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINIRT_H
# define MINIRT_H

# include <mlx.h>
# include <math.h>
# include <unistd.h>
# include <stdio.h>

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


typedef struct	s_camera{
	float		x;
	float		y;
	float		z;
	float		dx;
	float		dy;
	float		dz;
	float		zoom;
}				t_camera;

typedef	struct	s_sfera{
	float		x;
	float		y;
	float		z;
	float		raggio;
}				t_sfera;

int				create_trgb(int t, int r, int g, int b);
void			my_mlx_pixel_put(t_data *data, int x, int y, int color);
int 			icolor(t_info *gen);
float			vec3_norma(t_vet *vettor);
void			norma_vettori(t_vet *vettor, float res);
float			dot_vec3(t_sfera *cerchio, t_camera *cam, int i);
void			calcoloL(t_vet *vettor, t_camera *cam, t_sfera *cerchio);
void			direzione_cerchio(t_vet *vettor, t_info *gen, t_camera *cam);
float			dot_sfera(t_vet *vettor, t_camera *cam, t_sfera *cerchio, int i);

#endif