/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector2_calc.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdemare <mdemare@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 12:45:19 by mdemare           #+#    #+#             */
/*   Updated: 2025/03/07 14:26:32 by mdemare          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

/* Adds two 2D vectors */
t_vector2	ft_vec2_add(t_vector2 a, t_vector2 b)
{
	t_vector2	res;

	res.x = a.x + b.x;
	res.y = a.y + b.y;
	return (res);
}

/* Subtracts two 2D vectors */
t_vector2	ft_vec2_sub(t_vector2 a, t_vector2 b)
{
	t_vector2	res;

	res.x = a.x - b.x;
	res.y = a.y - b.y;
	return (res);
}

/* Computes the dot product of two 2D vectors */
double	ft_vec2_dot(t_vector2 a, t_vector2 b)
{
	return (a.x * b.x + a.y * b.y);
}

/* Multiplies a 2D vector by a scale */
t_vector2	ft_vec2_scale(t_vector2 v, double scale)
{
	t_vector2	res;

	res.x = v.x * scale;
	res.y = v.y * scale;
	return (res);
}

/* Computes the cross product of two 2D vectors */
double	ft_vec2_cross(t_vector2 a, t_vector2 b)
{
	return (a.x * b.y - a.y * b.x);
}
