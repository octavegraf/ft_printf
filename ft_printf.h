/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocgraf <ocgraf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 11:26:14 by ocgraf            #+#    #+#             */
/*   Updated: 2025/05/27 11:48:52 by ocgraf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "libft/libft.h"
# include <stdio.h>
# include <limits.h>
# include <stdarg.h>

int		ft_printf(const char *str, ...);
void	detect_conversion(const char *str, va_list(params), int *j);
void	ft_printf_type_c(int *j, int c);
void	ft_printf_type_d_i(int *j, int nb);
void	ft_printf_type_p(int *j, void *ptr);
void	ft_printf_type_s(int *j, char *s);
void	ft_printf_type_u(int *j, unsigned int nb);
void	ft_printf_type_x(int *j, int nb, char *base);

#endif