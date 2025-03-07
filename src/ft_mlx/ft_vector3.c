/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdemare <mdemare@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 12:41:43 by mdemare           #+#    #+#             */
/*   Updated: 2025/03/07 13:33:28 by mdemare          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

/* Creates a 3D vector */
t_vector3	ft_vec3_create(double x, double y, double z)
{
	t_vector3	v;

	v.x = x;
	v.y = y;
	v.z = z;
	return (v);
}

/* Normalizes a 3D vector */
t_vector3	ft_vec3_normalize(t_vector3 v)
{
	double	len;

	len = ft_sqrt(v.x * v.x + v.y * v.y + v.z * v.z);
	if (len == 0)
	{
		v.x = 0;
		v.y = 0;
		v.z = 0;
	}
	else
	{
		v.x /= len;
		v.y /= len;
		v.z /= len;
	}
	return (v);
}

/* Computes the magnitude of a 3D vector */
double	ft_vec3_length(t_vector3 v)
{
	return (ft_sqrt(v.x * v.x + v.y * v.y + v.z * v.z));
}
