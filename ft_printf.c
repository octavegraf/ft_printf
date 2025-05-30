/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocgraf <ocgraf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 11:13:03 by ocgraf            #+#    #+#             */
/*   Updated: 2025/05/30 17:07:59 by ocgraf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	detect_conversion(const char **str, va_list params, int *bytes)
{
	if (**str == 'c')
		ft_printf_type_c(va_arg(params, int), bytes);
	else if (*(str + 1) == 's')
		ft_printf_type_s(j, va_arg(params, char *));
	else if (*(str + 1) == 'p')
		ft_printf_type_p(j, va_arg(params, void *));
	else if ((*(str + 1) == 'd') || (*(str + 1) == 'i'))
		ft_printf_type_d_i(j, va_arg(params, int));
	else if (*(str + 1) == 'u')
		ft_printf_type_u(j, va_arg(params, unsigned int));
	else if (*(str + 1) == 'x')
		ft_printf_type_x(j, va_arg(params, unsigned int), "0123456789abcdef");
	else if (*(str + 1) == 'X')
		ft_printf_type_x(j, va_arg(params, unsigned int), "0123456789ABCDEF");
	else if (*(str + 1) == '%')
	{
		ft_putchar('%');
		**str++;
	}
}

int	ft_printf(const char *str, ...)
{
	va_list	params;
	int		bytes;

	va_start(params, str);
	while (*str)
	{
		if (*str == '%')
			detect_conversion(&str, params, &bytes);
		else
		{
			ft_putchar(*str);
			str += 1;
		}
	}
	va_end(params);
	return (bytes);
}
/* 
int	main(void)
{
	char	*test = "";
	int		ft_printf_len = 0;
	int		printf_len = 0;

	ft_printf_len = ft_printf("%c\n", 'a');
	printf_len = printf("%c\n", 'a');
	printf("\nft_printf lenght = %d, printf lenght = 
			%d\n\n—————————————————————\n\n", ft_printf_len, printf_len);
	ft_printf_len = ft_printf("%s\n", "Ceci est un test.");
	printf_len = printf("%s\n", "Ceci est un test.");
	printf("\nft_printf lenght = %d, printf lenght = 
			%d\n\n—————————————————————\n\n", ft_printf_len, printf_len);
	ft_printf_len = ft_printf("%p\n", test);
	printf_len = printf("%p\n", test);
	printf("\nft_printf lenght = %d, printf lenght = 
			%d\n\n—————————————————————\n\n", ft_printf_len, printf_len);
	ft_printf_len = ft_printf("%d, %i; %d, %i\n", INT_MIN, INT_MIN, INT_MAX, 
			INT_MAX);
	printf_len = printf("%d, %i; %d, %i\n", INT_MIN, INT_MIN, INT_MAX, INT_MAX);
	printf("\nft_printf lenght = %d, printf lenght = 
			%d\n\n—————————————————————\n\n", ft_printf_len, printf_len);
	ft_printf_len = ft_printf("%x, %X; %x, %X\n", INT_MIN, INT_MIN, INT_MAX, 
			INT_MAX);
	printf_len = printf("%x, %X; %x, %X\n", INT_MIN, INT_MIN, INT_MAX, INT_MAX);
	printf("\nft_printf lenght = %d, printf lenght = 
			%d\n\n—————————————————————\n\n", ft_printf_len, printf_len);
	ft_printf_len = ft_printf("%%\n");
	printf_len = printf("%%\n");
	printf("\nft_printf lenght = %d, printf lenght = 
			%d\n\n—————————————————————\n\n", ft_printf_len, printf_len);
	return (0);
}
 */
