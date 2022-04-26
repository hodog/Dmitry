/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalfred <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 16:59:50 by lalfred           #+#    #+#             */
/*   Updated: 2022/04/26 11:42:12 by lalfred          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write (1, &c, 1);
}

void    ft_putnbr(int nb)
{
    int     i;
    int     tmp;
    char    c;

    if (nb == -2147483648)
        write (1, "-2147483648", 11);
    else
    {
        if (nb < 0)
        {
            ft_putchar('-');
            nb = -nb;
        }
        i = 1;
        tmp = nb;
        while (tmp > 9)
        {
            tmp /= 10;
            i *= 10;
        }
        while (i > 0)
        {
            tmp = nb / i;
            ft_putchar(tmp + '0');
            nb -= tmp * i;
            i /= 10;
        }
    }
    ft_putchar('\n');
}

// Check :
/*
#include <stdio.h>

int main (void)
{
    printf("------\n");
    int nb = -34004234;
    printf("%d\n", nb);
    ft_putnbr(nb);
    printf("------\n");
    int nb1 = 34004234;
    printf("%d\n", nb1);
    ft_putnbr(nb1);
    printf("------\n");
    int nb2 = -1;
    printf("%d\n", nb2);
    ft_putnbr(nb2);
    printf("------\n");
    int nb3 = -2147483648;
    printf("%d\n", nb3);
    ft_putnbr(nb3);
    printf("------\n");
    int nb4 = 2147483647;
    printf("%d\n", nb4);
    ft_putnbr(nb4);
    printf("------\n");
    int nb5 = 0;
    printf("%d\n", nb5);
    ft_putnbr(nb5);
    printf("------\n");
}
*/