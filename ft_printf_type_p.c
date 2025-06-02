/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_type_p.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocgraf <ocgraf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 08:39:11 by ocgraf            #+#    #+#             */
/*   Updated: 2025/06/02 14:57:43 by ocgraf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_type_p(int *j, void *ptr)
{
	unsigned long long int	mem;

	if (!ptr)
	{
		ft_putstr("(nil)");
		*j += 5;
	}
	else
	{
		ft_putstr("0x");
		mem = (unsigned long long int)ptr;
		ft_putnbr_base(mem, "0123456789abcdef");
		*j += ft_intlen_base(mem, "0123456789abcdef") + 2;
	}
}
