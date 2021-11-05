/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 15:12:55 by aguiri            #+#    #+#             */
/*   Updated: 2021/11/04 22:41:55 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft/include/libft.h"
# include <stdarg.h>

// ****************** C U S T O M   P U T   F U N C T I O N S ******************

/**
 * \brief		Write a pointer address in hexadecimal on a choosen file
 * 				descriptor.
 * 
 * \param ptr	Pointer.
 * \param fd	File descriptor on which you want your output.
 * \return		Number of characters printed.
 */
int		ft_printf_putaddress_fd(void *ptr, int fd);

/**
 * \brief	    Write a given character on a choosen file descriptor. 
 *
 * \param c		Character to be written. 
 * \param fd	File descriptor on which you want your output.
 * \return		Number of characters printed.
 */
int		ft_printf_putchar_fd(char c, int fd);

/**
 * \brief       Write a given string on a choosen file descriptor followed
 * 			    by a line break.
 *
 * \param s     String to be written. 
 * \param fd	File descriptor on which you want your output.
 * \return		Number of characters printed.
 */
int		ft_printf_putendl_fd(char *s, int fd);

/**
 * \brief   	Write a given number in a given base on a choosen file
 * 				descriptor. 
 *
 * \param n		Number to be written.
 * \param base	Base in which the number is expressed.
 * \param fd	File descriptor on which you want your output.
 * \return		Number of characters printed.
 */
int		ft_printf_putnbr_base_fd(int nbr, char *base, int fd);

/**
 * \brief   	Write a given number on a choosen file descriptor. 
 *
 * \param	n	Unsigned integer to be written.
 * \param	fd	File descriptor on which you want your output.
 * \return		Number of characters printed.
 */
int		ft_printf_putnbr_uns_fd(unsigned int n, int fd);

/**
 * \brief   	Write a given number on a choosen file descriptor. 
 *
 * \param	n	Integer to be written.
 * \param	fd	File descriptor on which you want your output.
 * \return		Number of characters printed.
 */
int		ft_printf_putnbr_fd(int n, int fd);

/**
 * \brief       Write a given string on a choosen file descriptor. 
 *
 * \param s     String to be written. 
 * \param fd    File descriptor on which you want your output.
 * \return		Number of characters printed.
 */
int		ft_printf_putstr_fd(char *s, int fd);

// ******************************** O T H E R S ********************************

int		ft_args_count(const char *str);

/**
 * \brief		Write printf's parameters on standard output according to
 * 				the given 'c' character.
 * 
 * \param c		Conversion tag character.
 * \param ptr	Pointer to the first va_argument.
 * \return		Number of characters printed.
 */
int		ft_print_arg(char c, va_list ptr);

int		ft_printf(const char *arg_str, ...);

#endif