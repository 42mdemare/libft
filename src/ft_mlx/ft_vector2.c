/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdemare <mdemare@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 12:41:43 by mdemare           #+#    #+#             */
/*   Updated: 2025/03/07 14:18:09 by mdemare          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

/* Creates a 2D vector */
t_vector2	ft_vec2_create(double x, double y)
{
	t_vector2	v;

	v.x = x;
	v.y = y;
	return (v);
}

/* Normalizes a 2D vector */
t_vector2	ft_vec2_normalize(t_vector2 v)
{
	double	len;

	len = ft_vec2_length(v);
	if (len == 0)
		return (ft_vec2_create(0, 0));
	return (ft_vec2_create(v.x / len, v.y / len));
}

/* Computes a perpendicular vector */
t_vector2	ft_vec2_perp(t_vector2 v)
{
	t_vector2	res;

	res.x = -v.y;
	res.y = v.x;
	return (res);
}

/* Computes the magnitude of a 2D vector */
double	ft_vec2_length(t_vector2 v)
{
	return (ft_sqrt(v.x * v.x + v.y * v.y));
}
