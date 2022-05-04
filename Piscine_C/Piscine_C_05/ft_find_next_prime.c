/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalfred <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 23:18:43 by lalfred           #+#    #+#             */
/*   Updated: 2022/04/30 23:30:27 by lalfred          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int	i;

	if (nb <= 2)
		return (2);
	i = 2;
	while (nb % i != 0 || nb != i)
	{
		if (nb % i == 0 && nb != i)
		{
			nb++;
			i = 2;
		}
		i++;
	}
	return (nb);
}

// Check :
/*
#include <stdio.h>

int	main(void)
{
	int	nb;

	nb = -1;
	printf("%d\n", ft_find_next_prime(nb));
	return (0);
}
*/