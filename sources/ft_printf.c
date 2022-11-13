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

static int	ft_translate(va_list arg, char character);

int	ft_printf(const char *str, ...)
{
	int		index;
	int		type_return;
	va_list	arg;

	index = 0;
	type_return = 0;
	va_start(arg, str);
	if (!str)
		return (0);
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
			ft_translate(arg, str[index]);
		}
		index++;
	}
	va_end(arg);
	return (type_return);
}

static int	ft_translate(va_list arg, char character)
{
	int	type_return;

	type_return = 0;
	if (character == 's')
		type_return = ft_putstr(va_arg(arg, char *));
	else if (character == 'p')
		type_return = ft_putptr(va_arg(arg, unsigned long int));
	else if (character == 'd' || character == 'i')
		type_return = ft_putnbr(va_arg(arg, unsigned long int));
	else if (character == 'u')
		type_return = ft_putnbr_unsigned(va_arg(arg, unsigned int));
	else if (character == 'x' || character == 'X')
		type_return = ft_puthexa(va_arg(arg, unsigned int), character);
	else if (character == '%')
		type_return = ft_putchar('%');
	else
		type_return = ft_putchar(va_arg(arg, int));
	return (type_return);
}
