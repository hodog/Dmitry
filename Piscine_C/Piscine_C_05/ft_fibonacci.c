/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalfred <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 10:12:54 by lalfred           #+#    #+#             */
/*   Updated: 2022/04/30 15:39:29 by lalfred          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	n;
	
	n = 3;
	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else
		return(ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

// Check :
/*
#include <stdio.h>

int main (void)
{
	int index;

	index = 2;
	printf("%d\n", ft_fibonacci(index));
	return (0);
}
*/
