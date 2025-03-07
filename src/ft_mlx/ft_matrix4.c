/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrix4.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdemare <mdemare@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 12:53:18 by mdemare           #+#    #+#             */
/*   Updated: 2025/03/07 13:34:25 by mdemare          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

/* Returns a 4x4 identity matrix */
t_matrix4	ft_mat4_identity(void)
{
	t_matrix4	mat;
	int			i;
	int			j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (i == j)
				mat.m[i][j] = 1.0;
			else
				mat.m[i][j] = 0.0;
			j++;
		}
		i++;
	}
	return (mat);
}

/* Multiplies two 4x4 matrices */
t_matrix4	ft_mat4_multiply(t_matrix4 a, t_matrix4 b)
{
	t_matrix4	res;
	int			i;
	int			j;
	int			k;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			res.m[i][j] = 0;
			k = 0;
			while (k < 4)
			{
				res.m[i][j] += a.m[i][k] * b.m[k][j];
				k++;
			}
			j++;
		}
		i++;
	}
	return (res);
}

/* Multiplies a 4x4 matrix by a 3D vector */
t_vector3	ft_mat4_mul_vec3(t_matrix4 mat, t_vector3 v)
{
	t_vector3	res;
	double		w;

	res.x = mat.m[0][0] * v.x + mat.m[0][1]
		* v.y + mat.m[0][2] * v.z + mat.m[0][3];
	res.y = mat.m[1][0] * v.x + mat.m[1][1]
		* v.y + mat.m[1][2] * v.z + mat.m[1][3];
	res.z = mat.m[2][0] * v.x + mat.m[2][1]
		* v.y + mat.m[2][2] * v.z + mat.m[2][3];
	w = mat.m[3][0] * v.x + mat.m[3][1]
		* v.y + mat.m[3][2] * v.z + mat.m[3][3];
	if (w != 1 && w != 0)
	{
		res.x /= w;
		res.y /= w;
		res.z /= w;
	}
	return (res);
}

/* Creates a translation (move) matrix */
t_matrix4	ft_mat4_translation(double x, double y, double z)
{
	t_matrix4	mat;

	mat = ft_mat4_identity();
	mat.m[0][3] = x;
	mat.m[1][3] = y;
	mat.m[2][3] = z;
	return (mat);
}

/* Creates a scaling matrix */
t_matrix4	ft_mat4_scale(double x, double y, double z)
{
	t_matrix4	mat;

	mat = ft_mat4_identity();
	mat.m[0][0] = x;
	mat.m[1][1] = y;
	mat.m[2][2] = z;
	return (mat);
}
