/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalfred <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 16:29:02 by lalfred           #+#    #+#             */
/*   Updated: 2022/04/09 16:43:39 by lalfred          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] < 65 || str[i] > 90) && (str[i] < 97 || str[i] > 122))
			return (0);
		i++;
	}
	return (1);
}

// Check:
/*
#include <stdio.h>

int	main(void)
{
	char	*str;
	int		i;

	i = 0;
	str = "dasdsada";
	printf("dasdsada\n");
	printf("#1 : %d\n", ft_str_is_alpha(str));
	printf("Correct : 1\n");
	str = "das5ada0";
	printf("das5ada0\n");
	printf("#2 : %d\n", ft_str_is_alpha(str));
	printf("Correct 0\n");
	str = "da0sdsada";
	printf("da0sdsada\n");
	printf("#3 : %d\n", ft_str_is_alpha(str));
	printf("Correct : 0\n");
	str = " ";
	printf(" \n");
	printf("#4 : %d\n", ft_str_is_alpha(str));
	printf("Correct : 0\n");
	str = "";
	printf("\n");
	printf("#5 : %d\n", ft_str_is_alpha(str));
	printf("Correct : 1\n");
}
*/
