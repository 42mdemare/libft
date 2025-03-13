/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_color.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdemare <mdemare@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 21:58:58 by mdemare           #+#    #+#             */
/*   Updated: 2025/03/13 23:48:15 by mdemare          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

int	ft_get_background_pixel(t_img_data *img, int x, int y)
{
	char	*dst;

	if (!img || !img->addr || x < 0 || y < 0)
		return (0x000000);
	dst = img->addr + (y * img->line_length + x * (img->bits_per_pixel / 8));
	return (*(unsigned int *)dst);
}

unsigned int	ft_get_pixel_color(t_img_data *texture, int x, int y)
{
	char	*pixel;

	if (!texture || !texture->addr)
		return (0);
	pixel = texture->addr + (y * texture->line_length
			+ x * (texture->bits_per_pixel / 8));
	return (*(unsigned int *)pixel);
}

//more realistic but slower mix
unsigned int	ft_blend_colors_sqrt(unsigned int col1,
	unsigned int col2, double ratio)
{
	t_color	c1;
	t_color	c2;
	t_color	result;

	ft_color_from_hex(&c1, col1);
	ft_color_from_hex(&c2, col2);
	result.r = ft_sqrt((1 - ratio) * (c1.r * c1.r) + ratio * (c2.r * c2.r));
	result.g = ft_sqrt((1 - ratio) * (c1.g * c1.g) + ratio * (c2.g * c2.g));
	result.b = ft_sqrt((1 - ratio) * (c1.b * c1.b) + ratio * (c2.b * c2.b));
	result.a = (1 - ratio) * c1.a + ratio * c2.a;
	return (ft_color_to_hex(&result));
}

//linear interpolation, much faster but less realistic
unsigned int	ft_blend_colors_linear(unsigned int col1,
	unsigned int col2, double ratio)
{
	t_color	c1;
	t_color	c2;
	t_color	result;

	ft_color_from_hex(&c1, col1);
	ft_color_from_hex(&c2, col2);
	result.r = (1 - ratio) * c1.r + ratio * c2.r;
	result.g = (1 - ratio) * c1.g + ratio * c2.g;
	result.b = (1 - ratio) * c1.b + ratio * c2.b;
	result.a = (1 - ratio) * c1.a + ratio * c2.a;
	return (ft_color_to_hex(&result));
}

unsigned int	ft_adjust_brightness(unsigned int color, double factor)
{
	int	r;
	int	g;
	int	b;

	r = ((color >> 16) & 0xFF) * factor;
	g = ((color >> 8) & 0xFF) * factor;
	b = (color & 0xFF) * factor;
	if (r > 255)
		r = 255;
	if (g > 255)
		g = 255;
	if (b > 255)
		b = 255;
	return ((r << 16) | (g << 8) | b);
}
