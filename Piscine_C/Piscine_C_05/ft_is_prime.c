/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalfred <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 23:07:14 by lalfred           #+#    #+#             */
/*   Updated: 2022/04/30 23:30:35 by lalfred          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb < 2)
		return (0);
	i = 2;
	while (nb % i != 0)
		i++;
	if (i == nb)
		return (1);
	return (0);
}

// Check :
/*
#include <stdio.h>

int	main(void)
{
	int	nb;

	nb = 2;
	printf("%d\n", ft_is_prime(nb));
	return (0);
}
*/