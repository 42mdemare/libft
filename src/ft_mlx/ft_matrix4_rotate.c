/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrix4_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdemare <mdemare@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 13:27:36 by mdemare           #+#    #+#             */
/*   Updated: 2025/03/07 13:34:43 by mdemare          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

/* Creates a matrix for rotation around X-axis */
t_matrix4	ft_mat4_rotation_x(double angle)
{
	t_matrix4	mat;
	double		c;
	double		s;

	mat = ft_mat4_identity();
	c = cos(angle);
	s = sin(angle);
	mat.m[1][1] = c;
	mat.m[1][2] = -s;
	mat.m[2][1] = s;
	mat.m[2][2] = c;
	return (mat);
}

/* Creates a matrix for rotation around Y-axis */
t_matrix4	ft_mat4_rotation_y(double angle)
{
	t_matrix4	mat;
	double		c;
	double		s;

	mat = ft_mat4_identity();
	c = cos(angle);
	s = sin(angle);
	mat.m[0][0] = c;
	mat.m[0][2] = s;
	mat.m[2][0] = -s;
	mat.m[2][2] = c;
	return (mat);
}

/* Creates a matrix for rotation around Z-axis */
t_matrix4	ft_mat4_rotation_z(double angle)
{
	t_matrix4	mat;
	double		c;
	double		s;

	mat = ft_mat4_identity();
	c = cos(angle);
	s = sin(angle);
	mat.m[0][0] = c;
	mat.m[0][1] = -s;
	mat.m[1][0] = s;
	mat.m[1][1] = c;
	return (mat);
}
