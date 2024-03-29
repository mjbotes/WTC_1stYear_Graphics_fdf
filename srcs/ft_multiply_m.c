/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_multiply_m.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbotes <mbotes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/21 13:00:07 by mbotes            #+#    #+#             */
/*   Updated: 2019/09/17 11:05:13 by mbotes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/fdf.h"

void	ft_multiply_m(t_point *p, float mat[4][4])
{
	p->p_x = p->p_x * mat[0][0] + p->p_y * mat[1][0] + p->p_z * mat[2][0] +
		p->p_w * mat[3][0];
	p->p_y = p->p_x * mat[0][1] + p->p_y * mat[1][1] + p->p_z * mat[2][1] +
		p->p_w * mat[3][1];
	p->p_z = p->p_x * mat[0][2] + p->p_y * mat[1][2] + p->p_z * mat[2][2] +
		p->p_w * mat[3][2];
}
