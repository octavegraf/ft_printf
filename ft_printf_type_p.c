/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_type_p.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocgraf <ocgraf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 08:39:11 by ocgraf            #+#    #+#             */
/*   Updated: 2025/06/02 12:21:32 by ocgraf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_type_p(int *j, void *ptr)
{
	char					result[9];
	char					*hexa;
	unsigned long long int	mem;
	int						i;

	mem = (unsigned long long int)ptr;
	i = 8;
	hexa = "0123456789abcdef";
	while (--i >= 0)
	{
		result[i] = hexa[mem % 16];
		mem /= 16;
	}
	result[1] = 'x';
	result[8] = '\0';
	ft_putstr(result);
	*j += 8;
}
