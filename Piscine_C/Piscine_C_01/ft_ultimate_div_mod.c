/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalfred <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 15:12:09 by lalfred           #+#    #+#             */
/*   Updated: 2022/04/05 15:20:01 by lalfred          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmp;

	tmp = *a / *b;
	*b = *a % *b;
	*a = tmp;
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

	a = 10;
	b = 3;
	ptr1 = &a;
	ptr2 = &b;
	ft_ultimate_div_mod(ptr1, ptr2);
	printf("div : %d\n", a);
	printf("mod : %d\n", b);
	return (0);
}
*/