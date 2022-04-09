/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalfred <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 00:25:58 by lalfred           #+#    #+#             */
/*   Updated: 2022/04/09 16:28:30 by lalfred          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
		dest[i] = '\0';
	return (dest);
}

// Check:
/*
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main(void)
{
    char    *str;
    char    new[13];
    int     n;
	int		f;

    str = "Hello World!";
	f = 8;
	printf("original function behavior : %s\n", strncpy(new, str, f));
    ft_strncpy(new, str, f);
    n = 0;
    while (new[n])
    {
        write(1, &new[n], 1);
        n++;
    }
    printf("\n");
    return (0);
}
*/
