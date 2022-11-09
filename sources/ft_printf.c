/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larcrist <larcrist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 20:06:54 by larcrist          #+#    #+#             */
/*   Updated: 2022/11/09 00:31:58 by larcrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libraries/ft_printf.h"
#include <stdio.h>

static int	ft_conversion(va_list arg, char character);

int	ft_printf(const char *str, ...)
{
	int	index;
	int	type_return;
	va_list	arg;

	index = 0;
	type_return = 0;
	va_start(arg, str);
	while (str[index] != '\0')
	{
		if (str[index] != '%')
		{
			ft_putchar(str[index]);
			type_return++;
		}
		else
		{
			index++;
			ft_conversion(arg, str[index]);
		}
		index++;
	}
	va_end(arg);
	return (type_return);
}

static int	ft_conversion(va_list arg, char character)
{
	int	type_return;

	type_return = 0;
	if (character == 's')
		type_return = ft_putstr(va_arg(arg, char *)); //%s prints a string (as defined by the common C convention
	else if(character == 'p')
		printf("%%p the void * pointer argument has to be printed in hexadecimal format.");
	else if (character == 'd' || character == 'i')
		printf("%%d and %%i prints a decimal (base 10) number.");
	else if (character == 'u')
		printf("%%u prints an unsigned decimal (base 10) number");
	else if (character == 'x')
		printf("%%x prints a number in hexadecimal (base 16) lowercase format.");
	else if (character == 'x')
		printf("%%X prints a number in hexadecimal (base 16) uppercase format.");
	else if (character == '%')
		printf("%% prints a percent sign.");
	else
		type_return = ft_putchar(va_arg(arg, int)); //%c prints a single character
	return (type_return);
}
