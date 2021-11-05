/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_putstr_fd.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 01:56:53 by papy              #+#    #+#             */
/*   Updated: 2021/11/05 01:00:21 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_putstr_fd(char *s, int fd)
{
	int	i;

	if (s == NULL)
		return (ft_printf_putstr_fd("(null)", fd));
	i = 0;
	while (*s)
	{
		i += ft_printf_putchar_fd(*s, fd);
		s++;
	}
	return (i);
}
