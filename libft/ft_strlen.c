#include "libft.h"

// <string.h> need to be used for real srtlen()

size_t ft_strlen(char *str) {
    size_t i;
    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

int main(void) {
    char str [] = "Hello World!";
    printf("%zu\n", ft_strlen(str));
    return(0);
}