/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larcrist <larcrist@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 12:33:51 by larcrist          #+#    #+#             */
/*   Updated: 2022/11/02 17:15:00 by larcrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h> // malloc() and free()
# include <unistd.h> // write
# include <stdarg.h> // arg
# include "libft/includes/libft.h" // my libft

/* -------◊	PRINTF	◊------- */
int	ft_printf(const char *, ...);

#endif
