/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalfred <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 17:08:19 by lalfred           #+#    #+#             */
/*   Updated: 2022/04/23 11:27:25 by lalfred          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strncat_rev(char *dest, char *src, unsigned int nb)
{
	unsigned int	n;

    n = 0;
	while (src[nb])
	{
		dest[n] = src[nb];
		nb++;
		n++;
	}
	dest[n] = 0;
	return (dest);
}

int ft_comparison(char *str, char *to_find, unsigned int n)
{
    int j;

    j = 0;
    while (str[n] == to_find[j])
    {
        n++;
        j++;
        if (str[n] && !to_find[j])
            return(1);
    }
    return (0);
}

char    *ft_strstr(char *str, char *to_find)
{
    unsigned int    i;
    unsigned int    j;
    int             flag;
    char            *haystack;

    i = 0;
    flag = 0;
	haystack = str;
    if (to_find[0] == '\0')
        return (str);
    while (str[i])
    {
        flag = ft_comparison(str, to_find, i);
        if (flag == 1)
            {
                ft_strncat_rev(haystack, str, i);
                return(haystack);
            }
        i++;
    }    
    return (0);
}

// Check :
/*
#include <string.h>
#include <stdio.h>

int main(void)
{
    char    haystack[] = "Hello World!";
    char    needle[] = "o";


    printf("%s\n", strstr(haystack, needle));
    printf("%s\n", ft_strstr(haystack, needle));
    
    return (0);
}
*/