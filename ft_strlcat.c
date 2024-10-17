/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdemare <mdemare@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 13:54:37 by mdemare           #+#    #+#             */
/*   Updated: 2024/10/17 16:53:59 by mdemare          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char	*s;
	size_t	dstlen;
	size_t	srclen;
	size_t	i;
	size_t	result;

	s = (char *)src;
	dstlen = ft_strlen(dst);
	srclen = ft_strlen(s);
	i = 0;
	if (size > dstlen)
		result = srclen + dstlen;
	else
		result = srclen + size;
	while (s[i] && (dstlen + 1) < size)
	{
		dst[dstlen] = s[i];
		dstlen++;
		i++;
	}
	dst[dstlen] = '\0';
	return (result);
}
