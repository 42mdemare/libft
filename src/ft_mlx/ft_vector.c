/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdemare <mdemare@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 12:41:43 by mdemare           #+#    #+#             */
/*   Updated: 2025/03/07 14:18:09 by mdemare          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

/* Creates a 2D vector */
t_vector	ft_vec_create(double x, double y)
{
	t_vector	v;

	v.x = x;
	v.y = y;
	return (v);
}

/* Normalizes a 2D vector */
t_vector	ft_vec_normalize(t_vector v)
{
	double	len;

	len = ft_vec_length(v);
	if (len == 0)
		return (ft_vec_create(0, 0));
	return (ft_vec_create(v.x / len, v.y / len));
}

/* Computes a perpendicular vector */
t_vector	ft_vec_perp(t_vector v)
{
	t_vector	res;

	res.x = -v.y;
	res.y = v.x;
	return (res);
}

/* Computes the magnitude of a 2D vector */
double	ft_vec_length(t_vector v)
{
	return (ft_sqrt(v.x * v.x + v.y * v.y));
}
