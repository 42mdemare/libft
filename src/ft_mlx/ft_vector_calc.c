/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_calc.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdemare <mdemare@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 12:45:19 by mdemare           #+#    #+#             */
/*   Updated: 2025/03/07 14:26:32 by mdemare          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

/* Adds two 2D vectors */
t_vector	ft_vec_add(t_vector a, t_vector b)
{
	t_vector	res;

	res.x = a.x + b.x;
	res.y = a.y + b.y;
	return (res);
}

/* Subtracts two 2D vectors */
t_vector	ft_vec_sub(t_vector a, t_vector b)
{
	t_vector	res;

	res.x = a.x - b.x;
	res.y = a.y - b.y;
	return (res);
}

/* Computes the dot product of two 2D vectors */
double	ft_vec_dot(t_vector a, t_vector b)
{
	return (a.x * b.x + a.y * b.y);
}

/* Multiplies a 2D vector by a scale */
t_vector	ft_vec_scale(t_vector v, double scale)
{
	t_vector	res;

	res.x = v.x * scale;
	res.y = v.y * scale;
	return (res);
}

/* Computes the cross product of two 2D vectors */
double	ft_vec_cross(t_vector a, t_vector b)
{
	return (a.x * b.y - a.y * b.x);
}
