/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalfred <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 16:44:16 by lalfred           #+#    #+#             */
/*   Updated: 2022/04/09 16:49:30 by lalfred          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 48 || str[i] > 57)
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
	str = "9859585 3759845793";
	printf("%s\n", str);
	printf("#1 : %d\n", ft_str_is_numeric(str));
	printf("Correct : 0\n");
	str = "das5ada0";
	printf("%s\n", str);
	printf("#2 : %d\n", ft_str_is_numeric(str));
	printf("Correct : 0\n");
	str = "42434525211100";
	printf("%s\n", str);
	printf("#3 : %d\n", ft_str_is_numeric(str));
	printf("Correct : 1\n");
	str = " ";
	printf("%s\n", str);
	printf("#4 : %d\n", ft_str_is_numeric(str));
	printf("Correct : 0\n");
	str = "";
	printf("%s\n", str);
	printf("#5 : %d\n", ft_str_is_numeric(str));
	printf("Correct : 1\n");
}
*/