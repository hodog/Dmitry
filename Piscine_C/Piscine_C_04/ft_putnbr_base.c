/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalfred <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 15:26:09 by lalfred           #+#    #+#             */
/*   Updated: 2022/04/26 16:51:07 by lalfred          ###   ########.fr       */
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

void    ft_putnbr_base(int nbr, char *base)
{
    int n;
    int m;
    
    if (ft_strlen(base) >= 1)
    {
        n = 0;
        while (base[n])
        {
            while (base[m])
            {
                if (base[n] != base[m] || base[n] != '+' || base[n] != '-')
                ft_putnbr_base_aftercheck(nbr, base);
                m++;
            }
            n++;
        }
    }
}