/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalfred <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 12:47:48 by lalfred           #+#    #+#             */
/*   Updated: 2022/04/10 16:15:39 by lalfred          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32)
		{
			ft_putchar(92);
			if (str[i] < 16)
				ft_putchar(48);
			else
				ft_putchar(49);
			if (str[i] < 10 || (str[i] > 15 && str[i] < 26))
				ft_putchar(str[i] + 48);
			else
				ft_putchar(str[i] + 87);
			i++;
		}
		else
		{
			ft_putchar(str[i]);
			i++;
		}
	}
}

// Check :
/*
#include <stdio.h>

int	main(void)
{
	char	str[] = "H\nWor\tld!";

	ft_putstr_non_printable(str);
	printf("\n");
	printf("H\0aWor\09ld!");
	return (0);
}
*/