/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalfred <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 14:47:02 by lalfred           #+#    #+#             */
/*   Updated: 2022/04/19 15:26:25 by lalfred          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int ft_strcmp(char *s1, char *s2)
{
    int i;

    i = 0;
    while ((s1[i] || s2[i]) && s1[i] == s2[i])
    {
        i++;
        if ((!s1[i] || !s2[i]) && s1[i] != s2[i])
            return (s1[i] - s2[i]);
    }
    return (s1[i] - s2[i]);
} 

// Check :

#include <stdio.h>
#include <string.h>

int main (void)
{
    char s1[] = "";
    char s2[] = "a";
    
    printf("Original     : %d\n", strcmp(s1, s2));
    printf("Non-Original : %d\n", ft_strcmp(s1, s2));
    strcmp(s1, s2) == ft_strcmp(s1, s2) ? printf("Correct") : printf("Error");
}