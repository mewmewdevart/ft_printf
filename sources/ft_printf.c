/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larcrist <larcrist@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 20:06:54 by larcrist          #+#    #+#             */
/*   Updated: 2022/11/08 22:28:41 by larcrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libraries/ft_printf.h"
#include <stdio.h>

int	ft_printf(const char *str, ...)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] != '%')
			ft_putchar(str[index]);
		else
			printf ("chama ft_convert() oque tem dentro str: %c", str[++index]);
		index++;
	}
	return (index);
}

int	main (void)
{
	int	number;

	number = 5;
	ft_printf("larissa %d", number);
	return (0);
}
