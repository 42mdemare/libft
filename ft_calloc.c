/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdemare <mdemare@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 14:21:41 by mdemare           #+#    #+#             */
/*   Updated: 2024/10/17 18:13:09 by mdemare          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc( size_t elementCount, size_t elementSize)
{
	char	*ptr;
	size_t	total_size;

	if (elementSize == 0 || elementCount == 0)
		return (malloc(0));
	total_size = elementCount * elementSize;
	if (total_size / elementCount != elementSize)
		return (NULL);
	ptr = malloc(total_size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, total_size);
	return (ptr);
}
