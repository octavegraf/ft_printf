/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocgraf <ocgraf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 11:13:03 by ocgraf            #+#    #+#             */
/*   Updated: 2025/06/01 18:19:01 by ocgraf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	detect_conversion(const char **str, va_list prtf, int *bits)
{
	(*str)++;

	if (**str == 'c')
		ft_printf_type_c(bits, va_arg(prtf, int));
	else if (**str == 's')
		ft_printf_type_s(bits, va_arg(prtf, char *));
	else if (**str == 'p')
		ft_printf_type_p(bits, va_arg(prtf, void *));
	else if (**str == 'd' || **str == 'i')
		ft_printf_type_d_i(bits, va_arg(prtf, int));
	else if (**str == 'u')
		ft_printf_type_u(bits, va_arg(prtf, unsigned int));
	else if (**str == 'x')
		ft_printf_type_x(bits, va_arg(prtf, unsigned int), "0123456789abcdef");
	else if (**str == 'X')
		ft_printf_type_x(bits, va_arg(prtf, unsigned int), "0123456789ABCDEF");
	else if (**str == '%')
	{
		ft_putchar('%');
		(void)*str++;
		*bits += 1;
	}
}

int	ft_printf(const char *str, ...)
{
	va_list	prtf;
	int		bits;

	bits = 0;
	va_start(prtf, str);
	while (*str)
	{
		if (*str == '%' && *(str + 1))
			detect_conversion(&str, prtf, &bits);
		else
		{
			ft_putchar(*str);
			bits++;
		}
		str++;
	}
	va_end(prtf);
	return (bits);
}
