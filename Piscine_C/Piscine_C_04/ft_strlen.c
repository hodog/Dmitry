/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalfred <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 15:40:36 by lalfred           #+#    #+#             */
/*   Updated: 2022/04/25 16:42:47 by lalfred          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

// Check :
/*
#include <string.h>
#include <stdio.h>

int main (void)
{
    char    str[] = "Hello World!";

    printf("******************************************\n");
    12 == ft_strlen(str) ? printf("                 Correct\n") : printf("                  Error\n");
    printf("******************************************\n");
    return (0);
}
*/