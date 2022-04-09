/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalfred <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 20:19:32 by lalfred           #+#    #+#             */
/*   Updated: 2022/04/10 00:52:58 by lalfred          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[0] > 96 && str[0] < 123)
			str[0] -= 32;
		if (str[i] > 96 && str[i] < 123)
		{
			if ((str[i - 1] < 48 || (str[i - 1] > 57 && str[i - 1] < 65) || \
				(str[i - 1] > 90 && str[i - 1] < 97) || str[i - 1] > 122))
				str[i] -= 32;
		}
		else if (str[i] > 64 && str[i] < 91)
			str[i] += 32;
		i++;
	}
	return (str);
}

// Check :
/*
#include <stdio.h>

int	main(void)
{
	char	str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	printf("Before : %s\n", str);
	printf("After  : %s\n", ft_strcapitalize(str));
	printf("Correct: Salut, Comment Tu Vas ? 42mots Quarante-Deux; Cinquante+Et+Un \n");
	return (0);
}
*/