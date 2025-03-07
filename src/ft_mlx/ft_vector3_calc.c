/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector3_calc.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdemare <mdemare@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 12:45:19 by mdemare           #+#    #+#             */
/*   Updated: 2025/03/07 13:34:03 by mdemare          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

/* Adds two 3D vectors */
t_vector3	ft_vec3_add(t_vector3 a, t_vector3 b)
{
	t_vector3	res;

	res.x = a.x + b.x;
	res.y = a.y + b.y;
	res.z = a.z + b.z;
	return (res);
}

/* Subtracts two 3D vectors */
t_vector3	ft_vec3_sub(t_vector3 a, t_vector3 b)
{
	t_vector3	res;

	res.x = a.x - b.x;
	res.y = a.y - b.y;
	res.z = a.z - b.z;
	return (res);
}

/* Computes the cross product of two 3D vectors */
t_vector3	ft_vec3_cross(t_vector3 a, t_vector3 b)
{
	t_vector3	res;

	res.x = a.y * b.z - a.z * b.y;
	res.y = a.z * b.x - a.x * b.z;
	res.z = a.x * b.y - a.y * b.x;
	return (res);
}

/* Computes the dot product of two 3D vectors */
double	ft_vec3_dot(t_vector3 a, t_vector3 b)
{
	return (a.x * b.x + a.y * b.y + a.z * b.z);
}

/* Multiplies a 3D vector by a scale */
t_vector3	ft_vec3_scale(t_vector3 v, double scale)
{
	t_vector3	res;

	res.x = v.x * scale;
	res.y = v.y * scale;
	res.z = v.z * scale;
	return (res);
}
