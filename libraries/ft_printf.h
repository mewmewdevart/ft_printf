/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larcrist <larcrist@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 12:33:51 by larcrist          #+#    #+#             */
/*   Updated: 2022/11/14 17:24:10 by larcrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h> // malloc() and free()
# include <unistd.h> // write
# include <stdarg.h> // variadic functions
# include "libft/includes/libft.h" // libft

/* -------◊	PRINTF	◊------- */
int	ft_printf(const char *, ...);

#endif
