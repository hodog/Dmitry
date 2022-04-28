/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalfred <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 09:34:19 by lalfred           #+#    #+#             */
/*   Updated: 2022/04/28 09:41:14 by lalfred          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_factorial(int nb)
{

    if (nb <= 0 || nb > 12)
        return (0);
    if (nb == 1)
        return (1);
    return (nb * ft_recursive_factorial(nb - 1));
}

// Check :
/*
#include <stdio.h>

int main (void)
{
    int nb;

    nb = 10;
    printf("%d\n", ft_recursive_factorial(nb));
    printf("3628800 - Correct answer\n");
    return (0);
}
*/
