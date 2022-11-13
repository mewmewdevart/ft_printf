/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larcrist <larcrist@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 16:00:54 by larcrist          #+#    #+#             */
/*   Updated: 2022/11/13 16:00:59 by larcrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int	ft_putptr(unsigned long int ptr)
{
	int	address;

	address = 0;
	if (!ptr)
	{
		address += ft_putstr ("(nill)");
		return (address);
	}
	else
	{
		address = ft_putstr ("0x");
		address += ft_puthexa(ptr, 'x');
	}
	return (address);
}
