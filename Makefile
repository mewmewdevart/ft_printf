# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: larcrist <larcrist@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/28 11:54:05 by larcrist          #+#    #+#              #
#    Updated: 2022/11/01 23:15:28 by larcrist         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# variables
NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
REMOVE = rm -rf
# import library
LIBFT = libraries/libft/libft.a

# my archives/functions
SOURCE = sources/ft_printf.c \
	 sources/ft_printf_utils.c \

# .c files = .o files
OBJECTS = $(SOURCE:.c=.o)

# Colors
DEF_COLOR = \033[0;39m
GRAY = \033[0;90m
RED = \033[0;91m
GREEN = \033[0;92m
YELLOW = \033[0;93m
BLUE = \033[0;94m
MAGENTA = \033[0;95m
CYAN = \033[0;96m
WHITE = \033[0;97m

# compilation and linking
all: $(NAME)
	@echo "Makefile automatized by Larcrist ฅ^•ﻌ•^ฅ"
$(NAME): $(OBJECTS)
	$(AR) $(NAME) $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
	$(AR) $(NAME) $@ $^

clean:
	$(REMOVE) $(OBJECTS)
	@echo "$(GREEN)Object files cleaned! (ノಠ益ಠ)ノ彡$(DEF_COLOR)"

fclean: clean
	$(REMOVE) $(NAME)
	@echo "$(GREEN)Executable files cleaned! (✖╭╮✖)$(DEF_COLOR)"

re: fclean all
	@echo "$(GREEN)Cleaned and rebuilt everything! ᕦ(ò_óˇ)ᕤ$(DEF_COLOR)" 

.PHONY: all clean fclean re
