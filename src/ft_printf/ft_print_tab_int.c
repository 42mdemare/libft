/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_tab_int.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahoizai <ahoizai@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 12:44:50 by ahoizai           #+#    #+#             */
/*   Updated: 2025/03/13 12:47:11 by ahoizai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

void	ft_print_tab_int(int **tab)
{
	int	i;
	int	j;

	i = 0;
	while (tab && tab[i])
	{
		j = 0;
		while (tab[i][j])
		{
			ft_printf("tab[%d] = %d\n", i, tab[i][j]);
			j++;
		}
		i++;
	}
}
