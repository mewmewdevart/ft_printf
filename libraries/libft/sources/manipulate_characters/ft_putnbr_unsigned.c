/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larcrist <larcrist@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 16:47:46 by larcrist          #+#    #+#             */
/*   Updated: 2022/11/13 16:47:51 by larcrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int	ft_putnbr_unsigned(unsigned int nb)
{
	unsigned int	number;

	number = 0;
	if (nb <= 9)
		return (ft_putchar(nb + 48));
	else
	{
		number += ft_putnbr_unsigned(nb / 18);
		number += ft_putchar((nb % 10) + 48);
	}
	return (number);
}
