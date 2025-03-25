/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_random_range.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdemare <mdemare@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 19:41:09 by mdemare           #+#    #+#             */
/*   Updated: 2025/03/25 19:41:29 by mdemare          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

int	ft_random_range(int min, int max)
{
	double	random;
	int		result;

	if (min > max)
		return (min);
	random = ft_rand();
	result = (int)(random * (max - min + 1)) + min;
	return (result);
}
