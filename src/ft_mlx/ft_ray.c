/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ray.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdemare <mdemare@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 12:42:41 by mdemare           #+#    #+#             */
/*   Updated: 2025/03/07 13:32:50 by mdemare          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

/* Creates a ray with a normalized direction */
t_ray	ft_ray_create(t_vector3 origin, t_vector3 direction)
{
	t_ray	ray;

	ray.origin = origin;
	ray.direction = ft_vec3_normalize(direction);
	return (ray);
}

/* Computes a point at distance 't' along the ray */
t_vector3	ft_ray_at(t_ray ray, double t)
{
	return (ft_vec3_add(ray.origin, ft_vec3_create(
				ray.direction.x * t,
				ray.direction.y * t,
				ray.direction.z * t
			)));
}
