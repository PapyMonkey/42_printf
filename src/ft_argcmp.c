/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_argcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 14:05:40 by aguiri            #+#    #+#             */
/*   Updated: 2021/11/03 14:19:40 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_str_arg_count(const char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			while (str[i] == 32)
				i++;
			if (str[i] != '%' && str[i] != '\0')
				count++;
		}
		else
			i++;
	}
	return (count);
}

static int	ft_ptr_arg_count(const char *str)
{
	int	i;
	int	count;
	va_list	ptr_arg;

	va_start(ptr_arg, str);
	i = 0;
	count = 0;
	while (va_args())
	{
	}
	return (count);
}

int	ft_argcmp(const char *str)
{
	va_list	ptr_arg;

	va_start(ptr_arg, str);
}
