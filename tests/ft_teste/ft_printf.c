/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larcrist <larcrist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 20:06:54 by larcrist          #+#    #+#             */
/*   Updated: 2022/11/14 16:56:30 by larcrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_translate(va_list arg, char character);

int	ft_printf(const char *str, ...)
{
	int		index;
	int	count;
	va_list	arg;

	index = 0;
	count = 0;
	va_start(arg, str);
	if (!str)
		return (-1);
	while (str[index] != '\0')
	{
		if (str[index] != '%')
		{
			count += ft_putchar(str[index]);
		}
		else
		{
			index++;
			count += ft_translate(arg, str[index]);
		}
		index++;
	}
	va_end(arg);
	return (count);
}

static int	ft_translate(va_list arg, char character)
{
	int	type_return;

	type_return = 0;
	if (character == 'c')
		type_return = ft_putchar(va_arg(arg, int));
	else if (character == 's')
		type_return = ft_putstr(va_arg(arg, char *));
	else if (character == 'd' || character == 'i')
		type_return = ft_putnbr(va_arg(arg, int));
	else if (character == 'u')
		type_return = ft_putnbr_unsigned(va_arg(arg, int));
	else if (character == 'p')
		type_return = ft_putptr(va_arg(arg, unsigned long int));
	else if (character == '%')
		return (ft_putchar('%'));
	return (type_return);
}