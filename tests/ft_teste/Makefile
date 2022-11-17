#**************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: larcrist <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/14 16:58:09 by larcrist          #+#    #+#              #
#    Updated: 2022/11/09 00:07:59 by larcrist         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
REMOVE = rm -rf

# my functions
SOURCES = ft_printf.c \
	ft_putchar.c \
	ft_putstr.c \
	ft_puthex.c \
	ft_putptr.c \
	ft_putnbr.c \

# .c files = .o files
OBJECTS = $(SOURCES:.c=.o)

# compilation and linking
all: $(NAME)

$(NAME): $(OBJECTS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
	$(AR) $(NAME) $@

clean:
	$(REMOVE) $(OBJECTS)

fclean: clean
	$(REMOVE) $(NAME)

re: fclean all

.PHONY: all clean fclean re
