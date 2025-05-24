/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocgraf <ocgraf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 11:13:03 by ocgraf            #+#    #+#             */
/*   Updated: 2025/05/24 21:33:21 by ocgraf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	detect_conversion(char **str, int *j)
{
	
}

int	ft_printf(const char *str, ...)
{
	int	i;
	int	j;

	i = -1;
	j = 0;
	while (str[++i])
	{
		if str[i] == '%'
			detect_conversion(&str + i, &j);
	}
	return (i + j);
}
