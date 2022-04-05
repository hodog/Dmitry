/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalfred <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 15:33:53 by lalfred           #+#    #+#             */
/*   Updated: 2022/04/05 22:33:39 by lalfred          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int		i;
	char	tmp;

	i = -1;
	while (++i < --size)
	{
		tmp = tab[i];
		tab[i] = tab[size];
		tab[size] = tmp;
	}
}

// Check:
/*
#include <stdio.h>

int	main(void)
{
	int	tab[] = {1,2,3,4,5,7,10,55};
	int	n;

	n = 0;
	ft_rev_int_tab(tab, 8);
	while (n < 8)
	{
		printf("%d", tab[n]);
		printf(" ");
		n++;
	}
	return (0);
}
*/