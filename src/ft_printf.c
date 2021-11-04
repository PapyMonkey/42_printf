/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 15:11:54 by aguiri            #+#    #+#             */
/*   Updated: 2021/11/04 02:09:42 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_skip_spaces(const char *str, int *i)
{
	if (str[*i] == ' ')
	{
		ft_putchar_fd(' ', 1);
		while (str[*i] == ' ')
			(*i)++;
	}
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
			ft_skip_spaces(arg_str, &i);
			ft_print_arg(arg_str[i], arg_ptr);
			i++;
		}
		ft_putchar_fd(arg_str[i], 1);
		i++;
		n_printed++;
	}
	va_end(arg_ptr);
	return (n_printed);
}
