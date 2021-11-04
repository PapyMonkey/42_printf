/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_arg.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 23:54:20 by aguiri            #+#    #+#             */
/*   Updated: 2021/11/04 02:06:02 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_arg(char c, va_list ptr)
{
	if (c == 'c')
		ft_putchar_fd(va_arg(ptr, int), 1);
	else if (c == 's')
		ft_putstr_fd(va_arg(ptr, char *), 1);
	else if (c == 'd' || c == 'i')
		ft_putnbr_fd(va_arg(ptr, int), 1);
	else if (c == 'u')
		ft_putnbr_uns_fd(va_arg(ptr, unsigned int), 1);
	else if (c == 'x')
		ft_putnbr_base_fd(va_arg(ptr, int), "0123456789abcdef", 1);
	else if (c == 'p')
		ft_putaddress_fd(va_arg(ptr, void *), 1);
	else if (c == '%')
		ft_putchar_fd(c, 1);
}
