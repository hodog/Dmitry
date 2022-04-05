/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalfred <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 23:13:37 by lalfred           #+#    #+#             */
/*   Updated: 2022/04/05 12:29:59 by lalfred          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	int	i;
	int	n;

	i = 0;
	while (i < 99)
	{
		n = i + 1;
		while (n < 100)
		{
			ft_putchar('0' + (i / 10 % 10));
			ft_putchar('0' + (i % 10));
			ft_putchar(' ');
			ft_putchar('0' + (n / 10 % 10));
			ft_putchar('0' + (n % 10));
			if (!(i == 98 && n == 99))
				write(1, ", ", 2);
			n++;
		}
		i++;
	}
}

// Check:
/*
int	main(void)
{
	ft_print_comb();
}
*/