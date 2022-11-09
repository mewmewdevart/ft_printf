/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larcrist <larcrist@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 20:06:54 by larcrist          #+#    #+#             */
/*   Updated: 2022/11/08 22:50:55 by larcrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libraries/ft_printf.h"
#include <stdio.h>

void	ft_conversion(const char *str)
{
	if(*str == 'c')
		printf("%%c prints a single character.");
	else if(*str == 's')
		printf("%%s prints a string (as defined by the common C convention)");
	else if(*str == 'p')
		printf("%%p the void * pointer argument has to be printed in hexadecimal format.");
	else if (*str == 'd' || *str == 'i')
		printf("%%d and %%i prints a decimal (base 10) number.");
	else if (*str == 'u')
		printf("%%u prints an unsigned decimal (base 10) number");
	else if (*str == 'x')
		printf("%%x prints a number in hexadecimal (base 16) lowercase format.");
	else if (*str == 'x')
		printf("%%X prints a number in hexadecimal (base 16) uppercase format.");
	else if (*str == '%')
		printf("%% prints a percent sign.");
}

int	ft_printf(const char *str, ...)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] != '%')
			ft_putchar(str[index]);
		else
			ft_conversion(&str[++index]);
		index++;
	}
	return (index);
}

int	main (void)
{
	int	number;

	number = 5;
	ft_printf("%d", number);
	return (0);
}
