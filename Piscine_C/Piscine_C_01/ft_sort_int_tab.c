/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalfred <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 22:37:49 by lalfred           #+#    #+#             */
/*   Updated: 2022/04/05 23:26:04 by lalfred          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int		tmp;
	int		n;
	int		i;
	int		flag;

	n = 0;
	while (tab[n] && (n < size))
	{
		i = 0;
		flag = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				tmp = tab[i + 1];
				tab[i + 1] = tab[i];
				tab[i] = tmp;
				flag = 1;
			}
			i++;
		}
		n++;
		if (flag == 1)
			n = 0;
	}
}

// Check:
/*
#include <stdio.h>

int	main(void)
{
	int	tab[] = {5,4,3,2,7,1,55,10};
	int	n;

	n = 0;
	ft_sort_int_tab(tab, 8);
	while (n < 8)
	{
		printf("%d", tab[n]);
		printf(" ");
		n++;
	}
	return (0);
}
*/