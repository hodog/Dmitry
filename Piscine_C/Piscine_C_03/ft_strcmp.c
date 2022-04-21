/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalfred <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 14:47:02 by lalfred           #+#    #+#             */
/*   Updated: 2022/04/19 22:07:58 by lalfred          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] || s2[i]) && s1[i] == s2[i])
	{
		i++;
		if ((!s1[i] || !s2[i]) && s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	return (s1[i] - s2[i]);
}

// Check :
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	s1[] = "";
	char	s2[] = "";
	printf("s1 = nothing && s2 = nothing\n");
	strcmp(s1, s2) == ft_strcmp(s1, s2) ? printf("				Correct") : printf("					Error");
	printf("\n");
	char	s3[] = "";
	char	s4[] = "a";
	printf("s1 = nothing && s2 = a\n");
	strcmp(s3, s4) == ft_strcmp(s3, s4) ? printf("				Correct") : printf("					Error");
	printf("\n");
	char	s5[] = "a";
	char	s6[] = "";
	printf("s1 = a && s2 = nothing\n");
	strcmp(s5, s6) == ft_strcmp(s5, s6) ? printf("				Correct") : printf("					Error");
	printf("\n");
	char	s7[] = "abc";
	char	s8[] = "abc";
	printf("s1 = abc && s2 = abc\n");
	strcmp(s7, s8) == ft_strcmp(s7, s8) ? printf("				Correct") : printf("					Error");
	printf("\n");
	char	s9[] = "ab";
	char	s10[] = "abc";
	printf("s1 = ab && s2 = abc\n");
	strcmp(s9, s10) == ft_strcmp(s9, s10) ? printf("				Correct") : printf("					Error");
	printf("\n");
	char	s11[] = "abc";
	char	s12[] = "ab";
	printf("s1 = abc && s2 = ab\n");
	strcmp(s11, s12) == ft_strcmp(s11, s12) ? printf("				Correct") : printf("					Error");
	printf("\n");
	char	s13[] = "abd";
	char	s14[] = "abc";
	printf("s1 = abd && s2 = abc\n");
	strcmp(s13, s14) == ft_strcmp(s13, s14) ? printf("				Correct") : printf("					Error");
	printf("\n");
	char	s15[] = "abc";
	char	s16[] = "abd";
	printf("s1 = abc && s2 = abd\n");
	strcmp(s15, s16) == ft_strcmp(s15, s16) ? printf("				Correct") : printf("					Error");
	printf("\n");
	char	s17[] = "\n";
	char	s18[] = "\t";
	printf("s1 = /n && s2 = /t\n");
	strcmp(s17, s18) == ft_strcmp(s17, s18) ? printf("				Correct") : printf("					Error");
	printf("\n");
}
*/