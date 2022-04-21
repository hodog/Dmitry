/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalfred <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 22:24:16 by lalfred           #+#    #+#             */
/*   Updated: 2022/04/21 17:07:48 by lalfred          ###   ########.fr       */
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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	n;

	i = 0;
	n = ft_strlen(dest);
	while (src[i] && i < nb)
	{
		dest[n] = src[i];
		i++;
		n++;
	}
	dest[n] = 0;
	return (dest);
}

// Check :
/*
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int	main(void)
{
	char	*s1;
	char	s2[] = "abcd";
	char	*s3;
	char	s4[] = "abcd";
	int		nb = 3;
	
	s1 = (char *)malloc(sizeof(*s1) * (ft_strlen(s2) + 1));
	s3 = (char *)malloc(sizeof(*s3) * (ft_strlen(s4) + 1));

	printf("========							========\n");
	strncat(s1, s2, nb);
	ft_strncat(s3, s4, nb);
	ft_strlen(s1) == ft_strlen(s3) ? printf("				Correct\n") : printf("				 Error\n");
	printf("========							========\n");
	strncat(s1, s2, nb);
	ft_strncat(s3, s4, nb);
	ft_strlen(s1) == ft_strlen(s3) ? printf("				Correct\n") : printf("				 Error\n");
	printf("========							========\n");
	printf("string length : 		Original -> %d - %d <- Reproduced \n", ft_strlen(s1), ft_strlen(s3));
}
*/