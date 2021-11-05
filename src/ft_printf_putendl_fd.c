/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_putendl_fd.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 02:01:54 by aguiri            #+#    #+#             */
/*   Updated: 2021/11/04 22:10:50 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (*s)
	{
		i += ft_printf_putchar_fd(*s, fd);
		s++;
	}
	write(fd, "\n", 1);
	return (i);
}
