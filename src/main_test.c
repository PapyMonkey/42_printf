/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 02:26:33 by aguiri            #+#    #+#             */
/*   Updated: 2021/11/05 01:16:34 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#include <stdio.h>

int	main(void)
{
	int		toto_int;
	void	*toto_void;
	char	*toto_str;

	toto_int = 20909841;
	toto_void = "AAAABBBBCCC";
	toto_str = NULL;
	/*
	// Test : spaces
	printf("coucou %      d\n", toto_int);
	ft_printf("coucou %             d\n", toto_int);

	// Test hexa-number
	printf("coucou %x\n", toto_int);
	ft_printf("coucou %x\n", toto_int);
	
	// Test address
	printf("coucou %p\n", toto_void);
	ft_printf("coucou %p\n", toto_void);
	*/

	printf(" NULL %s NULL \n", toto_str);
	// Test hexa negatifs
	printf("%x\n", -1);
	ft_printf("%x\n", -1);
	return (0);
}
