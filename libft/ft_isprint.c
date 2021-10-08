#include "libft.h"

int ft_isprint(int argument) {
    if (argument >= 32 && argument <= 127)
        return (1);
    else
        return (0);
}