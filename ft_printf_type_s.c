/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_type_s.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocgraf <ocgraf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 21:42:58 by ocgraf            #+#    #+#             */
/*   Updated: 2025/06/02 15:06:50 by ocgraf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_type_s(int *j, char *s)
{
	if (!s)
	{
		ft_putstr("(null)");
		*j += ft_strlen("(null)");
	}
	else
	{
		ft_putstr(s);
		*j += ft_strlen(s);
	}
}
