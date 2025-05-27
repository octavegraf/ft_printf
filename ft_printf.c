/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocgraf <ocgraf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 11:13:03 by ocgraf            #+#    #+#             */
/*   Updated: 2025/05/27 09:19:10 by ocgraf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	detect_conversion(char **str, va_list(params), int *j)
{
	if (*str + 1 == 'c')
		ft_printf_type_c(j, va_arg(params, int));
	else if (*str + 1 == 's')
		ft_printf_type_s(j, va_arg(params, char *));
	else if (*str + 1 == 'p')
		ft_printf_type_p(j, va_arg(params, void *));
	else if (*str + 1 == 'd' || *str + 1 == 'i')
		ft_printf_type_d_i(j, va_arg(params, int));
	else if (*str + 1 == 'u')
		ft_printf_type_p(j, va_arg(params, void *));
}

int	ft_printf(const char *str, ...)
{
	va_list	params;
	int		i;
	int		j;

	va_start(params, str);
	i = -1;
	j = 0;
	while (str[++i])
	{
		if (str[i] == '%')
			detect_conversion(&str + i, &j, params);
	}
	va_end(params);
	return (i + j);
}
