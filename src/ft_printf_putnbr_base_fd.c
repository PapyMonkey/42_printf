/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_putnbr_base_fd.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 00:18:45 by aguiri            #+#    #+#             */
/*   Updated: 2021/11/05 01:18:45 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_printf_strlen_and_test(char *str)
{
	unsigned int	len;
	unsigned int	count;

	len = 0;
	count = 0;
	while (str[len] != '\0')
	{
		if (str[len] == '+' || str[len] == '-')
			return (0);
		while (count < len)
		{
			if (str[count] == str[len])
				return (0);
			count++;
		}
		len++;
	}
	return (len);
}

int	ft_printf_putnbr_base_fd(int nbr, char *base, int fd)
{
	unsigned int	len;
	unsigned int	div;
	unsigned int	mod;
	int				i;

	i = 0;
	len = ft_printf_strlen_and_test(base);
	if (len == 0 || len == 1)
		return (0);
	div = (unsigned int) nbr;
	mod = div % len;
	div = div / len;
	if (div != 0)
		i += ft_printf_putnbr_base_fd(div, base, fd);
	i += ft_printf_putchar_fd(base[mod], fd);
	return (i);
}
