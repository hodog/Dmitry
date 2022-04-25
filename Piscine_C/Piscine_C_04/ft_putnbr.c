/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalfred <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 16:59:50 by lalfred           #+#    #+#             */
/*   Updated: 2022/04/25 17:20:18 by lalfred          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write (1, &c, 1);
}

void    ft_putnbr(int nb)
{
    int i;
    int j;

    if (nb == 0)
        ft_putchar(48);
}

// Check :
#include <stdio.h>

int main (void)
{
    int nb = 343242342;
    printf("%d\n", nb);
    ft_putnbr(nb);
    printf("    ------");
    int nb2 = -1;
    printf("%d\n", nb2);
    ft_putnbr(nb2);
    printf("    ------");
    int nb3 = −2147483648;
    printf("%d\n", nb3);
    ft_putnbr(nb3);
    printf("    ------");
    int nb4 = 2147483647;
    printf("%d\n", nb4);
    ft_putnbr(nb4);
    printf("    ------");
    int nb5 = 0;
    printf("%d\n", nb5);
    ft_putnbr(nb5);
    printf("    ------");
}