/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalfred <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 15:24:58 by lalfred           #+#    #+#             */
/*   Updated: 2022/04/05 15:33:14 by lalfred          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

// Check:
/*
#include <stdio.h>

int	main(void)
{
	char	*str;

	str = "Hello World!";
	printf("%d\n", ft_strlen(str));
	return (0);
}
*/