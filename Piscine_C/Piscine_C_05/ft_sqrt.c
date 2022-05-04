/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalfred <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 15:40:48 by lalfred           #+#    #+#             */
/*   Updated: 2022/04/30 23:06:50 by lalfred          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	while (i * i != nb)
	{
		if (i * i > nb)
			return (0);
		i++;
	}
	return (i);
}

// Check :
/*
#include <stdio.h>

int	main(void)
{
	int	nb;

	nb = 63;
	printf("%d\n", ft_sqrt(nb));
	return (0);
}
*/