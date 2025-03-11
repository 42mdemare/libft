/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ray_object.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdemare <mdemare@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 13:10:43 by mdemare           #+#    #+#             */
/*   Updated: 2025/03/08 02:22:19 by mdemare          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

/* Tests intersection between a ray and a sphere */
int	ft_ray_intersects_sphere(t_ray ray, t_sphere sphere, double *t)
{
	t_vector3	oc;
	double		a;
	double		b;
	double		c;
	double		discriminant;

	oc = ft_vec3_sub(ray.origin, sphere.center);
	a = ft_vec3_dot(ray.direction, ray.direction);
	b = 2.0 * ft_vec3_dot(oc, ray.direction);
	c = ft_vec3_dot(oc, oc) - (sphere.radius * sphere.radius);
	discriminant = b * b - 4 * a * c;
	if (discriminant < 0)
		return (0);
	*t = (-b - ft_sqrt(discriminant)) / (2.0 * a);
	return (1);
}

/* Tests intersection between a ray and a plane */
int	ft_ray_intersects_plane(t_ray ray, t_plane plane, double *t)
{
	double		denom;
	t_vector3	p0l0;

	denom = ft_vec3_dot(plane.normal, ray.direction);
	if (ft_fabs(denom) < 1e-6)
		return (0);
	p0l0 = ft_vec3_sub(plane.point, ray.origin);
	*t = ft_vec3_dot(p0l0, plane.normal) / denom;
	return (*t >= 0);
}
