/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larcrist <larcrist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 12:33:51 by larcrist          #+#    #+#             */
/*   Updated: 2022/11/17 14:43:30 by larcrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h> // malloc() and free()
# include <unistd.h> // write
# include <stdarg.h> // variadic functions

// hexadecimal of ft_printf - putptr, puthexa
# define HEX_LOWCASE "0123456789abcdef"
# define HEX_UPCASE  "0123456789ABCDEF"

# define INT_MAX +2147483647
# define INT_MIN -2147483648

# ifdef __linux__
#  define NULLABLE "(nil)"
# else
#  define NULLABLE "0x0"
# endif

/* -------◊	PRINTF	◊------- */
int	ft_putchar(char c);
int ft_putstr(char *str);
int	ft_putptr(unsigned long int ptr);
int	ft_puthex(unsigned int number, int flag);
int	ft_putnbr(int nb);
int ft_putnbr_unsigned(unsigned int number);
int	ft_printf(const char *, ...);

#endif
