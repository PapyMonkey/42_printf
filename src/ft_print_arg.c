/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_arg.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 23:54:20 by aguiri            #+#    #+#             */
/*   Updated: 2021/11/04 22:43:02 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_arg(char c, va_list ptr)
{
	if (c == 'c')
		return (ft_printf_putchar_fd(va_arg(ptr, int), 1));
	else if (c == 's')
		return (ft_printf_putstr_fd(va_arg(ptr, char *), 1));
	else if (c == 'd' || c == 'i')
		return (ft_printf_putnbr_fd(va_arg(ptr, int), 1));
	else if (c == 'u')
		return (ft_printf_putnbr_uns_fd(va_arg(ptr, unsigned int), 1));
	else if (c == 'x')
		return (ft_printf_putnbr_base_fd(va_arg(ptr, int),
				"0123456789abcdef", 1));
	else if (c == 'X')
		return (ft_printf_putnbr_base_fd(va_arg(ptr, int),
				"0123456789ABCDEF", 1));
	else if (c == 'p')
		return (ft_printf_putaddress_fd(va_arg(ptr, void *), 1));
	else if (c == '%')
		return (ft_printf_putchar_fd(c, 1));
	return (0);
}
