/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrice.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danilo <danilo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 21:17:29 by danilo            #+#    #+#             */
/*   Updated: 2021/03/15 08:11:50 by danilo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATRICE_H
# define MATRICE_H

# include "../tupla.h"

typedef struct	s_matrici{
	float		mat4[4][4];
	float		mat4a[4][4];
	float		mat4p[4][4];
	float		mat3[3][3];
	float		mat3a[3][3];
	float		mat2[2][2];
	float		mat2a[2][2];
	float		x;
	float		y;
	float		z;
	float		w;
}				t_matrici;

typedef struct	s_assegnazione{
	float		pa;
	float		pb;
	float		pc;
	float		pd;
	float		sa;
	float		sb;
	float		sc;
	float		sd;
	float		ta;
	float		tb;
	float		tc;
	float		td;
	float		qa;
	float		qb;
	float		qc;
	float		qd;
	float		x;
	float		y;
	float		z;
	float		w;
}				t_assegnazione;

void				assegnazione_mat4(t_matrici *matrix, t_assegnazione *assign);
void				assegnazione_mat4_aux(t_matrici *matrix, t_assegnazione *assign);
void				assegnazione_mat3(t_matrici *matrix, t_assegnazione *assign);
void				assegnazione_mat3_aux(t_matrici *matrix, t_assegnazione *assign);
void				assegnazione_mat2(t_matrici *matrix, t_assegnazione *assign);
void				assegnazione_mat2_aux(t_matrici *matrix, t_assegnazione *assign);
int					matrice2_cmp(t_matrici *matrix);
int					matrice3_cmp(t_matrici *matrix);
int					matrice4_cmp(t_matrici *matrix);
void				matrice4_dot_ab(t_matrici *matrix);
void				matrice_tupla(t_matrici *matrix, t_assegnazione *assign);
void				matrice_trapostazione(t_matrici *matrix);
int					matrice_descriminante2(t_matrici *matrix);
void				sottomatrice3_3(t_matrici *matrix, int a, int b, int c);
void				sottomatrice4_4(t_matrici *matrix, int a, int b, int c);
int					matrice_minore2(t_matrici *matrix, int a, int b);
int					matrice_cofattore(t_matrici *matrix, int a, int b);
int					matrice_determinante3_3(t_matrici *matrix);
int					matrice_determinante4_4(t_matrici *matrix);
void				matrici_inversa4_4(t_matrici *matrix);
void				trasformazione_point(float x, float y, float z, t_matrici *matrix);
void				trasformazione_inversa_point(float x, float y, float z, t_matrici *matrix);
void				matrice_trasport_b_a(t_matrici *matrix);
void				ridimensionamento(float x, float y, float z, t_matrici *matrix);
void				matrice_tupla_matrix(t_matrici *matrix);
void				riassegnazione_p_a(t_matrici *matrix);
void				assign_valori(t_matrici *matrix);
#endif