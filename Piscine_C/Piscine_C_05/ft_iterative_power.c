/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalfred <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 17:15:28 by lalfred           #+#    #+#             */
/*   Updated: 2022/04/28 17:28:06 by lalfred          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_power(int nb, int power)
{
    int i;
    int tmp;
    
    if (power < 0)
        return (0);
    else if (power == 0)
        return (1);
    else
    {
        i = 1;
        tmp = nb;
        while (i < power)
        {
            nb *= tmp;
            i++;
        }
        return (nb);
    }
}


// Check :
/*
#include <stdio.h>

int main (void)
{
    int nb = 0;
    int power = 0;

    printf("%d\n", ft_iterative_power(nb, power));
    return (0);
}
*/