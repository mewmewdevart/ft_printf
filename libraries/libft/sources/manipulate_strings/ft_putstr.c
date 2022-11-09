/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larcrist <larcrist@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 00:03:08 by larcrist          #+#    #+#             */
/*   Updated: 2022/11/09 00:13:19 by larcrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int	ft_putstr(char *str)
{
	int	index;

	index = 0;
	if (str[index] == '\0')
		return (0);
	while (str[index] != '\0')
	{
		ft_putchar(str[index]);
		index++;
	}
	return (1);
}
