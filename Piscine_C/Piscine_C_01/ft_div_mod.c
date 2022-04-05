/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalfred <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 15:00:08 by lalfred           #+#    #+#             */
/*   Updated: 2022/04/05 15:10:58 by lalfred          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = (a / b);
	*mod = a % b;
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
	ft_div_mod(a, b, ptr1, ptr2);
	printf("div : %d\n", a);
	printf("mod : %d\n", b);
	return (0);
}
*/
