/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalfred <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 15:26:09 by lalfred           #+#    #+#             */
/*   Updated: 2022/04/28 14:05:21 by lalfred          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] > 127)
			return (0);
		i++;
	}
	return (1);
}

void    ft_putnbr_convert(long int nb, char *base)
{
    unsigned int    i;
    long int        tmp;
    char            c;
    unsigned int    n;

    n = ft_strlen(base);
    if (nb < 0)
    {
        ft_putchar('-');
        nb = -nb;
    }
    i = 1;
    tmp = nb;
    while (tmp > n - 1)
    {
        tmp /= n;
        i *= n;
    }
    while (i > 0)
    {
        tmp = nb / i;
        ft_putchar(base[tmp]);
        nb -= tmp * i;
        i /= n;
    }
    ft_putchar('\n');
}

int ft_check_base(char *base)
{
    int n;
    int m;

    if (ft_strlen(base) >= 1 && ft_str_is_printable(base) == 1)
    {
        n = 0;
        m = 1;
        while (base[m] && base[n] && n < m)
        {
            while (base[m])
            {
                if (base[n] == base[m] || base[n] == '+' || base[n] == '-')
                {
                    return (1);
                }
                m++;
            }
            n++;
        }
    }
    return (0);
}

void    ft_putnbr_base(int nbr, char *base)
{
    if (ft_check_base(base) == 0)
    {
        ft_putnbr_convert(nbr, base);
    }
}

// Check :
/*
#include <stdio.h>

int main (void)
{
    char base[] = "0a";
    int nb = -2147483648;
    
    printf("------\n");
    printf("%d\n", nb);
    ft_putnbr_base(nb, base);
    printf("------\n");
    int nb1 = 34004234;
    printf("%d\n", nb1);
    ft_putnbr_base(nb1, base);
    printf("------\n");
    int nb2 = -1;
    printf("%d\n", nb2);
    ft_putnbr_base(nb2, base);
    printf("------\n");
    int nb3 = -2147483648;
    printf("%d\n", nb3);
    ft_putnbr_base(nb3, base);
    printf("------\n");
    int nb4 = 2147483647;
    printf("%d\n", nb4);
    ft_putnbr_base(nb4, base);
    printf("------\n");
    int nb5 = 0;
    printf("%d\n", nb5);
    ft_putnbr_base(nb5, base);
    printf("------\n");
}
*/