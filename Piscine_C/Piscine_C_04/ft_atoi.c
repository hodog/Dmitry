/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalfred <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 11:43:28 by lalfred           #+#    #+#             */
/*   Updated: 2022/04/26 15:24:54 by lalfred          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi(char *str)
{
    int i;
    int flag;
    int num;
    
    i = 0;
    flag = 1;
    num = 0;
    while (str[i] == ' ' || str[i] == '\f' || str[i] == '\n' || \
     str[i] == '\r' || str[i] == '\t' || str[i] == '\v')
        i++;
    while (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            flag *= -1;
        i++;
    }
    while (str[i] >= 48 && str[i] <= 57)
    {
        num = num + (str[i] - 48);
        if (str[i + 1] >= 48 && str[i + 1] <= 57)
            num *= 10;
        i++;
    }
    return (num * flag);
}

// Check :
/*
#include <stdio.h>

int main (void)
{
    char    str[] = " ---+--+1234ab567";

    printf("%d\n", ft_atoi(str));
    return (0);
}
*/