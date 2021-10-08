# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lalfred <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/17 23:14:10 by lalfred           #+#    #+#              #
#    Updated: 2021/08/17 23:14:51 by lalfred          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME =	libft

LIST =	main.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c

FLAGS =	-Wall	-Wextra	-Werror -g

all : $(NAME)

$(NAME) :
	gcc $(FLAGS) -o $(NAME) $(LIST)

clean :
	@rm -f $(OBJ) 

fclean : clean
	@rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re
