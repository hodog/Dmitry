/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalfred <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 22:24:16 by lalfred           #+#    #+#             */
/*   Updated: 2022/04/20 20:31:30 by lalfred          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

// Check :

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	main(void)
{
	char	s1[] = "";
	char	s2[] = "";
	printf("s1 = nothing && s2 = nothing\n");
	strcat(s1, s2) == ft_strcat(s1, s2) ? printf("				Correct") : printf("					Error");
	printf("\n");
//
	char	*s13;
	s2 = (char *)malloc(sizeof(*s13) * 4);
	char	s14[] = "abc";
	printf("s1 = [4] && s2 = abc\n");
	strcat(s13, s14) == ft_strcat(s13, s14) ? printf("				Correct") : printf("					Error");
	printf("\n");
	/*
	char	s3[] = "";
	char	s4[] = "a";
	printf("s1 = nothing && s2 = a\n");
	strcat(s3, s4) == ft_strcat(s3, s4) ? printf("				Correct") : printf("					Error");
	printf("\n");
	char	s5[] = "a";
	char	s6[] = "";
	printf("s1 = a && s2 = nothing\n");
	strcat(s5, s6) == ft_strcat(s5, s6) ? printf("				Correct") : printf("					Error");
	printf("\n");
	char	s7[] = "abc";
	char	s8[] = "abc";
	printf("s1 = abc && s2 = abc\n");
	strcat(s7, s8) == ft_strcat(s7, s8) ? printf("				Correct") : printf("					Error");
	printf("\n");
	char	s9[] = "ab";
	char	s10[] = "abc";
	printf("s1 = ab && s2 = abc\n");
	strcat(s9, s10) == ft_strcat(s9, s10) ? printf("				Correct") : printf("					Error");
	printf("\n");
	char	s11[] = "abc";
	char	s12[] = "ab";
	printf("s1 = abc && s2 = ab\n");
	strcat(s11, s12) == ft_strcat(s11, s12) ? printf("				Correct") : printf("					Error");
	printf("\n");
	*/
	char	*s13;
	s13 = (char *)malloc(sizeof(*s13) * 4);
	char	s14[] = "abc";
	printf("s1 = [4] && s2 = abc\n");
	strcat(s13, s14) == ft_strcat(s13, s14) ? printf("				Correct") : printf("					Error");
	printf("\n");
	char	s15[4];
	char	s16[] = "abdjhbjh";
	printf("s1 = [4] && s2 = abdjhbjh\n");
	strcat(s15, s16) == ft_strcat(s15, s16) ? printf("				Correct") : printf("					Error");
	printf("\n");
	char	s17[4];
	char	s18[] = "\t";
	printf("s1 = [4] && s2 = /t\n");
	strcat(s17, s18) == ft_strcat(s17, s18) ? printf("				Correct") : printf("					Error");
	printf("\n");
}
