/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalfred <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 12:30:29 by lalfred           #+#    #+#             */
/*   Updated: 2022/04/05 13:44:31 by lalfred          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	min_int(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (1);
	}
	else
		return (0);
}

int	check(int nb)
{
	if (nb >= 0)
		return (1);
	ft_putchar('-');
	return (0);
}

void	ft_putnbr(int nb)
{
	int	tmp;
	int	a;
	int	i;

	tmp = nb;
	i = 1;
	if (!(min_int(nb)))
	{
		if ((check(nb)) == 0)
			nb *= -1;
		while (tmp >= 10)
		{
			tmp /= 10;
			i *= 10;
		}
		while (i >= 1)
		{
			a = nb / i;
			ft_putchar ('0' + a);
			nb = nb - a * i;
			i /= 10;
		}
	}
}

// Check:
/*
#include <stdio.h>

int	main(void)
{
	ft_putnbr(-1);
	printf("\n");
	ft_putnbr(0);
	printf("\n");
	ft_putnbr(1);
	printf("\n");
	ft_putnbr(-2147483648);
	printf("\n");
	ft_putnbr(10);
	printf("\n");
	ft_putnbr(2147483647);
	return (0);
}
*/