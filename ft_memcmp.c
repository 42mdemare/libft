/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdemare <mdemare@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 08:55:03 by mdemare           #+#    #+#             */
/*   Updated: 2024/10/16 09:08:34 by mdemare          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_memcmp( const void *pointer1, const void *pointer2, size_t size)
{
	size_t			i;
	unsigned char	*string1;
	unsigned char	*string2;

	string1 = (unsigned char *)pointer1;
	string2 = (unsigned char *)pointer2;
	i = 0;
	while ((string1[i] || string2[i]) && i < (size))
	{
		if (string1[i] != string2[i])
			return (string1[i] - string2[i]);
		i++;
	}
	return (0);
}
