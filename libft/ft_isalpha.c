#include "libft.h"

int ft_isalpha (int character) {
    if (character >= 97 && character <= 122)
        return (1);
    else if (character >= 65 && character <= 90)
        return (2);
    else
        return (0);
}