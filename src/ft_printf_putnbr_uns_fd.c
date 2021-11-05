/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_putnbr_uns_fd.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 00:06:53 by aguiri            #+#    #+#             */
/*   Updated: 2021/11/04 22:16:24 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_putnbr_uns_fd(unsigned int n, int fd)
{
	int	i;

	i = 0;
	if (n > 9)
		i += ft_printf_putnbr_uns_fd(n / 10, fd);
	i += ft_printf_putchar_fd(n % 10 + '0', fd);
	return (i);
}
