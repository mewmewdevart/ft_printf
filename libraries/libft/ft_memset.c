/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 21:42:53 by larcrist          #+#    #+#             */
/*   Updated: 2022/10/06 15:38:10 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t len)
{
	size_t			index;
	unsigned char	*ptr;

	ptr = str;
	index = 0;
	while (index < len)
	{
		ptr[index] = (unsigned char)c;
		index++;
	}
	return (str);
}
