/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalfred <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 00:55:46 by lalfred           #+#    #+#             */
/*   Updated: 2022/04/10 11:57:47 by lalfred          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (src[i])
	{
		if (size != 0 && (i < (size - 1)))
			dest[i] = src[i];
		else if (i == size - 1)
			dest[i] = '\0';
		i++;
	}
	return (i);
}

// Check :
/*

#include <stdio.h>
#include <string.h>

int	main(void)
{
	const char		str[] = "HelloWorld!";
	char			dest[10];
	unsigned long	size = 2;
	char			str_new[] = "HelloWorld!";
	char			dest_new[10];
	unsigned int	size_new = 2;

	printf("Reproduced function result : %d\n", ft_strlcpy(dest_new, str_new, size_new));
	printf("Reproduced function result : %s\n", dest_new);
	printf("Original function result   : %lu\n", strlcpy(dest, str, size));
	printf("Original function result   : %s\n", dest);
	return (0);
}
