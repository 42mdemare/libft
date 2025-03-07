/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_light.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdemare <mdemare@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 13:14:22 by mdemare           #+#    #+#             */
/*   Updated: 2025/03/07 13:37:40 by mdemare          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

/* Computes lighting intensity on a point */
double	ft_compute_lighting(t_vector3 point, t_vector3 normal, t_light light)
{
	t_vector3	light_dir;
	double		intensity;

	light_dir = ft_vec3_normalize(ft_vec3_sub(light.position, point));
	intensity = ft_vec3_dot(normal, light_dir);
	if (intensity < 0)
		return (0);
	return (intensity * light.intensity);
}

// int	main(void)
// {
// 	t_vector3	point = ft_vec3_create(0, 0, 0);
// 	t_vector3	normal = ft_vec3_create(0, 0, 1);
// 	t_light		light;

// 	light.position = ft_vec3_create(1, 1, 1);
// 	light.intensity = 1.0;

// 	double	intensity = ft_compute_lighting(point, normal, light);

// 	printf("Computed lighting intensity: %.2f\n", intensity);
// 	return (0);
// }
