/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_type_x.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocgraf <ocgraf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 09:39:15 by ocgraf            #+#    #+#             */
/*   Updated: 2025/06/02 14:14:46 by ocgraf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_type_x(int *j, unsigned int nb, char *base)
{
	ft_putnbr_base(nb, base);
	*j += ft_intlen_base(nb, base);
}
