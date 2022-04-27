/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalfred <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 15:31:26 by lalfred           #+#    #+#             */
/*   Updated: 2022/04/27 17:24:54 by lalfred          ###   ########.fr       */
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

int index_search(char c, char *base)
{
    int i;

    i = 0;
    while (base[i])
    {
        if (c == base[i])
            return (i);
        i++;
    }
    return (0);
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

int checked_char(char c, char *base)
{
    int i;

    i = 0;
    while (base[i])
    {
        if (c == base[i])
            return (1);
        i++;
    }    
    return (0);
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

int ft_atoi(char *str, char *base)
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
    while (checked_char(str[i], base) == 1)
    {
        num = num + index_search(str[i], base);
        if (checked_char(str[i + 1], base) == 1)
            num *= ft_strlen(base);
        i++;
    }
    return (num * flag);
}

int ft_atoi_base(char *str, char *base)
{
    if (ft_check_base(base) == 0)
    {
        ft_atoi(str, base);
    }
}

// Check :
/*
#include <stdio.h>

int main (void)
{
    char    str[] = " -+--a0000000000000000000000000000000-fn";
    char base[] = "0a";
    
    printf("%d\n", ft_atoi_base(str, base));
    return (0);
}
*/