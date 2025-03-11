/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_color_from_hex.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdemare <mdemare@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 21:16:40 by mdemare           #+#    #+#             */
/*   Updated: 2025/03/10 21:17:28 by mdemare          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

void	ft_color_from_hex(t_color *color, unsigned int hex)
{
	color->hex = hex;
	color->r = (hex >> 16) & 0xFF;
	color->g = (hex >> 8) & 0xFF;
	color->b = hex & 0xFF;
	color->a = (hex >> 24) & 0xFF;
}
