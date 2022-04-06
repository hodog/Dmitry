/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalfred <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 12:27:41 by lalfred           #+#    #+#             */
/*   Updated: 2022/04/06 16:27:17 by lalfred          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strcpy(char *dest, char *src)
{
    int i;

    i = 0;
    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
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

    str = "Hello World!";
    ft_strcpy(new, str);
    n = 0;
    while (new[n])
    {
        write(1, &new[n], 1);
        n++;
    }
    printf("\n");
    printf("original function behavior : %s\n", strcpy(new, str));
    return (0);
}
*/