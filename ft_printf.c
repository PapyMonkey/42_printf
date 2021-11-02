/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 15:11:54 by aguiri            #+#    #+#             */
/*   Updated: 2021/11/02 16:06:58 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include "libft.h"
#include <stdio.h>

int	ft_printf(const char *arg_first, ...)
{
	char	*str;
	va_list	arg_ptr;

	str = arg_first;
    va_start(arg_ptr, arg_first);
	while (str)
	{
		
	}
}

/*
int	main(void)
{


	return (0);
}
*/