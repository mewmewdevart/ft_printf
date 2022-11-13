/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larcrist <larcrist@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 16:19:45 by larcrist          #+#    #+#             */
/*   Updated: 2022/11/13 16:19:48 by larcrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

//this function is helper of ft_putptr (printer address of pointer)
int	ft_puthexa(unsigned long number, int flag)
{
	int	count;

	count = 0;
	if (number >= 16)
	{
		count = count + ft_puthexa((number / 16), flag);
		count = count + ft_puthexa((number % 16), flag);
	}
	else
	{
		if (flag == 'x')
			return (ft_putchar(HEX_LOWCASE[number]));
		else
			return (ft_putchar(HEX_UPCASE[number]));
	}
	return (count);
}
