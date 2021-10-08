#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>
# include <ctype.h>
# include <stdio.h>
# include <string.h> // for strlen()

int ft_isalpha (int character);
int ft_isdigit(int digit);
int ft_isalnum(int argument);
int ft_isascii(int argument);
int ft_isprint(int argument);
size_t ft_strlen(char *str);
void *ft_memset(void *str, int c, size_t n);

#endif