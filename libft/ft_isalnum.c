#include "libft.h"

int ft_isalnum(int argument) {
    if (argument >= 48 && argument <= 57)
        return (1);
    else if (argument >= 65 && argument <= 90)
        return (1);
    else if (argument >= 97 && argument <= 122)
        return (1);
    else
        return (0);
}