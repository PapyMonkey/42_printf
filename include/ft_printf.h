/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiri <aguiri@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 15:12:55 by aguiri            #+#    #+#             */
/*   Updated: 2021/11/04 00:54:59 by aguiri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft/include/libft.h"
# include <stdarg.h>

int		ft_args_count(const char *str);

/**
 * \brief		Write printf's parameters on standard output according to
 * 				the given 'c' character.
 * 
 * \param c		Conversion tag character.
 * \param ptr	Pointer to the first va_argument.
 */
void	ft_print_arg(char c, va_list ptr);

int		ft_printf(const char *arg_str, ...);

#endif