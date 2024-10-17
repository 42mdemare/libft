/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdemare <mdemare@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 15:15:49 by mdemare           #+#    #+#             */
/*   Updated: 2024/10/17 10:01:20 by mdemare          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *string, int searchedChar)
{
	const char	*last;

	last = NULL;
	while (*string != '\0')
	{
		if (*string == (char)searchedChar)
			last = string;
		string++;
	}
	if (searchedChar == '\0')
		return ((char *)string);
	return ((char *)last);
}
