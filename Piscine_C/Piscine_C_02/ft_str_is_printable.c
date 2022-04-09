/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalfred <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 18:52:20 by lalfred           #+#    #+#             */
/*   Updated: 2022/04/09 19:27:51 by lalfred          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] > 127)
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
	str = "FSDFSDFSDFS";
	printf("%s\n", str);
	printf("#1 : %d\n", ft_str_is_printable(str));
	printf("Correct : 1\n");
	str = "das5ada0'\t'";
	printf("%s\n", str);
	printf("#2 : %d\n", ft_str_is_printable(str));
	printf("Correct 0\n");
	str = "daAdsada";
	printf("%s\n", str);
	printf("#3 : %d\n", ft_str_is_printable(str));
	printf("Correct : 1\n");
	str = " ";
	printf("%s\n", str);
	printf("#4 : %d\n", ft_str_is_printable(str));
	printf("Correct : 1\n");
	str = "";
	printf("%s\n", str);
	printf("#5 : %d\n", ft_str_is_printable(str));
	printf("Correct : 1\n");
}
*/