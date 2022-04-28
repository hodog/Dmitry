/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalfred <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 09:24:18 by lalfred           #+#    #+#             */
/*   Updated: 2022/04/28 09:40:51 by lalfred          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_factorial(int nb)
{
    int        result;
    int        i;
    
    i = 1;
    result = 1;
    if ((nb <= 0) || (nb > 12))
            return (0);
    if (nb == 1)
            return (1);
    while (i <= nb)
    {
            result = i * result;
            i++;
    }
    return (result);
}

// Check :
/*
#include <stdio.h>

int main (void)
{
    int nb;

    nb = 10;
    printf("%d\n", ft_iterative_factorial(nb));
    printf("3628800 - Correct answer\n");
    return (0);
}
*/
