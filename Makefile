# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: larcrist <larcrist@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/28 11:54:05 by larcrist          #+#    #+#              #
#    Updated: 2022/11/09 01:09:03 by larcrist         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# variables
NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
REMOVE = rm -rf
# import library
LIBFT = ./libftprintf.a

# my archives/functions
SOURCE = sources/ft_printf.c \

# .c files = .o files
OBJECTS = $(SOURCE:.c=.o)

# colors
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
	@echo "$(GREEN)◞( ､ᐛ)､＿/ The Makefile of [PRINTF] has been compilated!$(DEF_COLOR)" 

$(NAME): $(LIBFT) $(OBJECTS)
	$(AR) $(NAME) $@ $^

$(LIBFT):
	@make -C libraries/libft
	@mv libraries/libft/libft.a ./libftprintf.a

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
	$(AR) $(NAME) $@ $^

clean:
	$(REMOVE) $(OBJECTS)
	@make clean -C libraries/libft
	@echo "$(BLUE)[PRINTF] Object files cleaned!$(DEF_COLOR)"
	

fclean: clean
	$(REMOVE) $(NAME)
	@make fclean -C libraries/libft
	@echo "$(BLUE)[PRINTF] Executable files cleaned!$(DEF_COLOR)"
	

re: fclean all
	 @echo "$(BLUE)[PRINTF] Cleaned and rebuilt everything!$(DEF_COLOR)"

norm:
	@norminette

.PHONY: all clean fclean re norm
