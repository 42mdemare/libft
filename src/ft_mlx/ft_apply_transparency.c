/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_apply_transparency.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdemare <mdemare@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 16:54:58 by mdemare           #+#    #+#             */
/*   Updated: 2025/03/20 18:23:51 by mdemare          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

unsigned int	apply_transparency(t_img_data *img,
					t_vector_int pos, double alpha, int color)
{
	unsigned int	bg_color;

	bg_color = ft_get_background_pixel(img, pos.x, pos.y);
	return (ft_blend_colors_linear(bg_color, color, alpha));
}
