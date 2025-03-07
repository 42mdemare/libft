/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_math.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdemare <mdemare@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 12:58:26 by mdemare           #+#    #+#             */
/*   Updated: 2025/03/07 13:20:46 by mdemare          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

/* Computes the square root of a number using Newton's method */
double	ft_sqrt(double number)
{
	double	guess;
	double	epsilon;

	if (number < 0)
		return (-1);
	guess = number / 2;
	epsilon = 1e-6;
	while ((guess * guess - number) > epsilon
		|| (guess * guess - number) < -epsilon)
	{
		guess = (guess + number / guess) / 2;
	}
	return (guess);
}

/* Clamps a value between min and max */
double	ft_clamp(double value, double min, double max)
{
	if (value < min)
		return (min);
	if (value > max)
		return (max);
	return (value);
}

/* Computes the absolute value of a double */
double	ft_fabs(double x)
{
	if (x < 0)
		return (-x);
	return (x);
}

/* Performs linear interpolation between two values */
double	ft_lerp(double a, double b, double t)
{
	if (t < 0)
		t = 0;
	if (t > 1)
		t = 1;
	return (a + t * (b - a));
}

// ft_fabs test
// int	main(void)
// {
// 	double	num1 = -42.5;
// 	double	num2 = 3.14;

// 	printf("Absolute value of %.2f: %.2f\n", num1, ft_fabs(num1));
// 	printf("Absolute value of %.2f: %.2f\n", num2, ft_fabs(num2));
// 	return (0);
// }

// ft_lerp test
// int	main(void)
// {
// 	double	a = 10.0;
// 	double	b = 20.0;
// 	double	t1 = 0.0;
// 	double	t2 = 0.5;
// 	double	t3 = 1.0;

// 	printf("LERP(%.2f, %.2f, %.2f) = %.2f\n", a, b, t1, ft_lerp(a, b, t1));
// 	printf("LERP(%.2f, %.2f, %.2f) = %.2f\n", a, b, t2, ft_lerp(a, b, t2));
// 	printf("LERP(%.2f, %.2f, %.2f) = %.2f\n", a, b, t3, ft_lerp(a, b, t3));
// 	return (0);
// }
