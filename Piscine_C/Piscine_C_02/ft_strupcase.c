/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalfred <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 19:28:54 by lalfred           #+#    #+#             */
/*   Updated: 2022/04/09 20:17:34 by lalfred          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] -= 32;
		i++;
	}
	return (str);
}

// Check :
/*
#include <stdio.h>

int	main(void)
{
	char	str[] = "jadjkadkajdJIDJIDJSJdai3131";

	printf("Before: %s\n", str);
	printf("After :%s\n", ft_strupcase(str));
	return (0);
}
*/