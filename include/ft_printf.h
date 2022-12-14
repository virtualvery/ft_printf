/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_lib.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rverona- <rverona-@student.42.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 22:27:55 by rverona-          #+#    #+#             */
/*   Updated: 2022/12/08 22:29:19 by rverona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

# define HEX_LOW "0123456789abcdef"
# define HEX_UP "0123456789ABCDEF"
# define SYS_NIL "(nil)"

int	ft_printf(const char *str, ...);
int	convert_specifier(va_list *args, char specifier);
int	printchar(char c);
int	printstr(char *str);
int	printnbr(int nbr);
int	printunsigned(unsigned int nbr);
int	printhex(unsigned long nbr, char *base);
int	printptr(unsigned long ptr, char *base);

#endif
