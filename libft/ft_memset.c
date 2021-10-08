#include "libft.h"

void *ft_memset(void *str, int c, size_t n) {
    int i;
    char *newstr;

    i = 0;
    newstr = 
    while (i <= n) {
        str[i] -> n = c;
        i++;
    }
    printf("%s\n", str);
    return (str);
}

int main (void) {
    char str[] = "Hello World!";
    ft_memset(str, 68, 4);
    printf("%s",memset(str, 68, 4));
    return (0);
}