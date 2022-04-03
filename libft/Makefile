# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lalfred <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/17 23:14:10 by lalfred           #+#    #+#              #
#    Updated: 2021/10/22 11:00:16 by lalfred          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = 	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c			\
		ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c	ft_memmove.c ft_strlcpy.c	\
		ft_toupper.c	ft_tolower.c	ft_strchr.c	ft_strrchr.c	ft_strncmp.c	\
		ft_memchr.c 	ft_memcmp.c 	ft_strnstr.c ft_atoi.c	ft_calloc.c			\
		ft_strdup.c	ft_strlcat.c 													\
		ft_substr.c	ft_strjoin.c	ft_strtrim.c	ft_split.c	ft_itoa.c	ft_strmapi.c 	\
		ft_striteri.c	ft_putchar_fd.c	ft_putstr_fd.c	ft_putendl_fd.c	ft_putnbr_fd.c		\

SRC_BONUS = ft_lstnew_bonus.c	ft_lstadd_front_bonus.c	ft_lstsize_bonus.c	ft_lstlast_bonus.c	\
			ft_lstadd_back_bonus.c ft_lstdelone_bonus.c	ft_lstclear_bonus.c	ft_lstiter_bonus.c	\
			ft_lstmap_bonus.c

OBJ = $(patsubst %.c,%.o,$(SRC))
OBJ_BONUS = $(patsubst %.c,%.o,$(SRC_BONUS))

INCLUDES = libft.h

CFLAGS = -Wall -Werror -Wextra

COMPILE = gcc $(CFLAGS) -c

LIB = ar rcs $(NAME)

REMOVE = rm -f

all: $(NAME)

$(NAME) : $(OBJ)
	$(LIB) $?

%.o : %.c $(INCLUDES)
	$(COMPILE) $< -o $@
	
bonus:
	@make OBJ="$(OBJ_BONUS)" all ${INCLUDES}
	
clean:
	@$(REMOVE) $(OBJ) $(OBJ_BONUS)
	
fclean: clean
	@$(REMOVE) $(NAME)
	
re: fclean all

.PHONY: all clean fclean re bonus
