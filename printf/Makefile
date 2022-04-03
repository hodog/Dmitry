# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lalfred <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/13 00:05:32 by lalfred           #+#    #+#              #
#    Updated: 2022/01/13 22:38:29 by lalfred          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

NAME_LIBFT = libft.a

LIBFT = ./libft

SRC = ft_printf.c utils_general.c print_char.c print_nbr.c print_str.c

OBJ = $(SRC:.c=.o)

CC = gcc

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

%.o : %.c
	$(CC) $(FLAGS) -c $< -o $@ -I$(LIBFT) -MD

include $(wildcard *.d)

$(NAME): $(OBJ)
	make all -C $(LIBFT)
	cp $(LIBFT)/$(NAME_LIBFT) $(NAME)
	ar rc $(NAME) $?
	ranlib $(NAME)

clean:
	rm -f $(OBJ)
	rm -f $(wildcard *.d)
	make clean -C $(LIBFT)

fclean: clean
	rm -f $(NAME)
	make fclean -C $(LIBFT)

re: fclean all

bonus: re

.PHONY: all clean fclean re bonus
