/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalfred <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 23:13:37 by lalfred           #+#    #+#             */
/*   Updated: 2022/04/05 10:00:45 by lalfred          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	int		n;
	char	a;
	char	b;
	char	c;

	n = 0;
	while (n < 1000)
	{
		a = n / 100 % 10;
		b = n / 10 % 10;
		c = n % 10;
		if (a < b && b < c && (a != 7 && b != 8 && c != 9))
		{
			ft_putchar('0' + a);
			ft_putchar('0' + b);
			ft_putchar('0' + c);
			ft_putchar(',');
			ft_putchar(' ');
		}
		n++;
	}
	write(1, "789", 3);
}

// Check:
/*
int	main(void)
{
	ft_print_comb();
}
*/