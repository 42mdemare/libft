/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdemare <mdemare@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 09:52:03 by mdemare           #+#    #+#             */
/*   Updated: 2024/10/17 16:55:44 by mdemare          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_overflow_atoi(long j, int sign)
{
	if (j > 18 && sign > 0)
		return (-1);
	else if (j > 18 && sign < 0)
		return (0);
	else
		return (1);
}

int	ft_atoi(const char *nptr)
{
	long	i;
	long	j;
	long	number;
	int		signe;

	j = 0;
	i = 0;
	number = 0;
	signe = 1;
	while ((nptr[i] == ' ' || (nptr[i] >= '\t' && nptr[i] <= '\r')))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i++] == '-')
			signe = -signe;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		number = number * 10 + (nptr[i++] - '0');
		j++;
	}
	if (ft_overflow_atoi(j, signe) != 1)
		return (ft_overflow_atoi(j, signe));
	return (number * signe);
}
