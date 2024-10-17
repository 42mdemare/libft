/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdemare <mdemare@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 08:55:03 by mdemare           #+#    #+#             */
/*   Updated: 2024/10/17 16:54:35 by mdemare          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp( const void *pointer1, const void *pointer2, size_t size)
{
	size_t				i;
	const unsigned char	*string1;
	const unsigned char	*string2;

	string1 = (const unsigned char *)pointer1;
	string2 = (const unsigned char *)pointer2;
	i = 0;
	while (i < size)
	{
		if (string1[i] != string2[i])
			return (string1[i] - string2[i]);
		i++;
	}
	return (0);
}
