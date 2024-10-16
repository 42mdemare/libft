/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdemare <mdemare@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 08:20:02 by mdemare           #+#    #+#             */
/*   Updated: 2024/10/16 08:45:54 by mdemare          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *memoryBlock, int searchedChar, size_t size)
{
	size_t			i;
	unsigned char	*str;

	str = (unsigned char *)memoryBlock;
	i = 0;
	while (i < size)
	{
		if (str[i] == searchedChar)
			return ((void *)(str + i));
		i++;
	}
	return (NULL);
}
