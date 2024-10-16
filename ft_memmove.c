/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdemare <mdemare@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 09:26:27 by mdemare           #+#    #+#             */
/*   Updated: 2024/10/16 13:53:26 by mdemare          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ELEMENT_COUNT 10

void	*ft_memmove(void *dest, const void *src, size_t size)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	i = 0;
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (d < s)
	{
		while (i < size)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
		while (size--)
			d[size] = s[size];
	return (d);
}
