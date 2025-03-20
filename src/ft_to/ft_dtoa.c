/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dtoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdemare <mdemare@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 16:46:07 by mdemare           #+#    #+#             */
/*   Updated: 2025/03/19 16:46:18 by mdemare          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

static void	ft_reverse_str(char *str, int len)
{
	int		i;
	int		j;
	char	tmp;

	i = 0;
	j = len - 1;
	while (i < j)
	{
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
		i++;
		j--;
	}
}

static int	ft_int_to_str(long nb, char *str, int is_neg)
{
	int	i;

	i = 0;
	if (nb == 0)
		str[i++] = '0';
	while (nb > 0)
	{
		str[i++] = (nb % 10) + '0';
		nb /= 10;
	}
	if (is_neg)
		str[i++] = '-';
	ft_reverse_str(str, i);
	return (i);
}

char	*ft_dtoa(double num)
{
	long		int_part;
	double		frac_part;
	int			i;
	int			is_neg;
	char		*str;

	str = (char *)malloc(32);
	if (!str)
		return (NULL);
	is_neg = (num < 0);
	if (is_neg)
		num = -num;
	int_part = (long)num;
	frac_part = num - int_part;
	i = ft_int_to_str(int_part, str, is_neg);
	str[i++] = '.';
	frac_part *= 1000000;
	ft_int_to_str((long)frac_part, str + i, 0);
	return (str);
}
