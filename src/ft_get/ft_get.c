/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdemare <mdemare@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 13:26:33 by mdemare           #+#    #+#             */
/*   Updated: 2025/03/07 13:31:40 by mdemare          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

int	*ft_get_int(int *new_int)
{
	static int	*var_int = NULL;

	if (new_int)
		var_int = new_int;
	return (var_int);
}

char	*ft_get_char(char *new_char)
{
	static int	*var_char = NULL;

	if (new_char)
		var_char = new_char;
	return (var_char);
}

char	**ft_get_tab(char **new_tab)
{
	static int	*var_tab = NULL;

	if (new_tab)
		var_tab = new_tab;
	return (var_tab);
}

void	*ft_get_void(void *new_void)
{
	static int	*var_void = NULL;

	if (new_void)
		var_void = new_void;
	return (var_void);
}

void	*ft_get_struct(void *new_struct)
{
	static int	*var_struct = NULL;

	if (new_struct)
		var_struct = new_struct;
	return (var_struct);
}
