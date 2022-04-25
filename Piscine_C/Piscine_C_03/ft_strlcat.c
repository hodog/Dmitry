/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalfred <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 11:27:06 by lalfred           #+#    #+#             */
/*   Updated: 2022/04/24 23:14:05 by lalfred          ###   ########.fr       */
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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	n;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	n = ft_strlen(dest);
	while (i < size - ft_strlen(dest) - 1)
	{
		dest[n] = src[i];
		i++;
		n++;
	}
	dest[n] = 0;
	return (ft_strlen(dest));
}

// Check :

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int	main(void)
{
	char	*s1;
	char	s2[] = "abcd";
	char	*s3;
	char	s4[] = "abcd";
	int		nb = 10;
	
	s1 = (char *)malloc(sizeof(*s1) * (ft_strlen(s2) + 1));
	s3 = (char *)malloc(sizeof(*s3) * (ft_strlen(s4) + 1));

	printf("========							========\n");
	printf("s1 : %s	s2 : %s : %d\n", s1, s2, nb);
	printf("s3 : %s	s4 : %s : %d\n", s3, s4, nb);
	printf("		========****************************========\n");
	strlcat(s1, s2, nb);
	printf("srtlcat : %lu\n", strlcat(s1, s2, nb));
	ft_strlcat(s3, s4, nb);
	printf("ft_srtlcat : %d\n", ft_strlcat(s3, s4, nb));
	printf("s1 : %s	s2 : %s : %d\n", s1, s2, nb);
	printf("s3 : %s	s4 : %s : %d\n", s3, s4, nb);
	printf("		========****************************========\n");
	strlcat(s1, s2, nb);
	printf("s1 : %s	s2 : %s : %d\n", s1, s2, nb);
	printf("s3 : %s	s4 : %s : %d\n", s3, s4, nb);
	printf("srtlcat : %lu\n", strlcat(s1, s2, nb));
	ft_strlcat(s3, s4, nb);
	printf("ft_srtlcat : %d\n", ft_strlcat(s3, s4, nb));
	printf("s1 : %s	s2 : %s : %d\n", s1, s2, nb);
	printf("s3 : %s	s4 : %s : %d\n", s3, s4, nb);
	printf("========							========\n");
}
