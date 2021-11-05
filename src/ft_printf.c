/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 15:11:54 by aguiri            #+#    #+#             */
/*   Updated: 2021/11/05 00:50:41 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_skip_spaces(const char *str, int *i)
{
	int	count;

	count = 0;
	if (str[*i] == ' ')
	{
		count = ft_printf_putchar_fd(' ', 1);
		while (str[*i] == ' ')
			(*i)++;
	}
	return (count);
}

int	ft_printf(const char *arg_str, ...)
{
	va_list	arg_ptr;
	int		i;
	int		n_printed;

	va_start(arg_ptr, arg_str);
	i = 0;
	n_printed = 0;
	while (arg_str[i])
	{
		if (arg_str[i] == '%')
		{
			i++;
			n_printed += ft_skip_spaces(arg_str, &i);
			n_printed += ft_print_arg(arg_str[i++], arg_ptr);
		}
		else
			n_printed += ft_printf_putchar_fd(arg_str[i++], 1);
	}
	va_end(arg_ptr);
	return (n_printed);
}
