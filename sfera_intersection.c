/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sfera_intersection.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrignon <dbrignon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 11:21:41 by dbrignon          #+#    #+#             */
/*   Updated: 2021/03/22 11:44:57 by dbrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tupla.h"

int		sfera_instersezioni(t_sfera *sphere)
{
	if (sphere->t1 <= sphere->t2 && sphere->t1 > 0 && sphere->t2 > 0)
		return (sphere->t1);
	else if (sphere->t1 >= sphere->t2 && sphere->t1 > 0 && sphere->t2 > 0)
		return (sphere->t2);
	else if (sphere->t1 > sphere->t2 && (sphere->t1 > 0 || sphere->t2 > 0))
		return (sphere->t1);
	else if (sphere->t1 < sphere->t2 && (sphere->t1 > 0 || sphere->t2 > 0))
		return (sphere->t2);
	else
		return (0);

}