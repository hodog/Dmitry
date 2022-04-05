/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalfred <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 14:39:57 by lalfred           #+#    #+#             */
/*   Updated: 2022/04/05 14:55:55 by lalfred          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

// Check:
/*
#include <stdio.h>

int	main(void)
{	
	int	a;
	int	b;
	int	*ptr1;
	int	*ptr2;

	a = 1;
	b = -1;
	printf("Before SWAP -> a : %d b :%d\n", a, b);
	ptr1 = &a;
	ptr2 = &b;
	ft_swap(ptr1, ptr2);
	printf("After SWAP -> a : %d b :%d\n", a, b);
	return (0);
}
*/
