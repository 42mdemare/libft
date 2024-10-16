/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdemare <mdemare@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 15:14:36 by mdemare           #+#    #+#             */
/*   Updated: 2024/10/16 08:32:29 by mdemare          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strchr(const char *string, int searchedChar)
{
	while (*string != '\0')
	{
		if (*string == (char)searchedChar)
			return ((char *)string);
		string++;
	}
	if (searchedChar == '\0')
		return ((char *)string);
	return (NULL);
}
