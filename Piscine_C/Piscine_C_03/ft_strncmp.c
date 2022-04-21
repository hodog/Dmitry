/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalfred <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 22:09:16 by lalfred           #+#    #+#             */
/*   Updated: 2022/04/19 22:22:46 by lalfred          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;

	i = 0;
	while ((s1[i] || s2[i]) && (s1[i] == s2[i]) && i < n)
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
	int n = 1;
	char	s1[] = "";
	char	s2[] = "";
	printf("s1 = nothing && s2 = nothing && n = 1\n");
	strncmp(s1, s2, n) == ft_strncmp(s1, s2, n) ? printf("				Correct") : printf("					Error");
	printf("\n");
	char	s3[] = "";
	char	s4[] = "a";
	printf("s1 = nothing && s2 = a && n = 1\n");
	strncmp(s3, s4, n) == ft_strncmp(s3, s4, n) ? printf("				Correct") : printf("					Error");
	printf("\n");
	char	s5[] = "a";
	char	s6[] = "";
	printf("s1 = a && s2 = nothing && n = 1\n");
	strncmp(s5, s6, n) == ft_strncmp(s5, s6, n) ? printf("				Correct") : printf("					Error");
	printf("\n");
	char	s7[] = "abc";
	char	s8[] = "abc";
	printf("s1 = abc && s2 = abc && n = 1\n");
	strncmp(s7, s8, n) == ft_strncmp(s7, s8, n) ? printf("				Correct") : printf("					Error");
	printf("\n");
	char	s9[] = "ab";
	char	s10[] = "abc";
	printf("s1 = ab && s2 = abc && n = 1\n");
	strncmp(s9, s10, n) == ft_strncmp(s9, s10, n) ? printf("				Correct") : printf("					Error");
	printf("\n");
	char	s11[] = "abc";
	char	s12[] = "ab";
	printf("s1 = abc && s2 = ab && n = 1\n");
	strncmp(s11, s12, n) == ft_strncmp(s11, s12, n) ? printf("				Correct") : printf("					Error");
	printf("\n");
	char	s13[] = "abd";
	char	s14[] = "abc";
	printf("s1 = abd && s2 = abc && n = 1\n");
	strncmp(s13, s14, n) == ft_strncmp(s13, s14, n) ? printf("				Correct") : printf("					Error");
	printf("\n");
	char	s15[] = "abc";
	char	s16[] = "abd";
	printf("s1 = abc && s2 = abd && n = 1\n");
	strncmp(s15, s16, n) == ft_strncmp(s15, s16, n) ? printf("				Correct") : printf("					Error");
	printf("\n");
	char	s17[] = "\n";
	char	s18[] = "\t";
	printf("s1 = /n && s2 = /t && n = 1\n");
	strncmp(s17, s18, n) == ft_strncmp(s17, s18, n) ? printf("				Correct") : printf("					Error");
	printf("\n");
	char	s19[] = "1234567";
	char	s20[] = "1234567";
	printf("s1 = 1234567 && s2 = 1234567 && n = 10\n");
	strncmp(s19, s20, 10) == ft_strncmp(s19, s20, 10) ? printf("				Correct") : printf("					Error");
	printf("\n");
	char	s21[] = "1234567";
	char	s22[] = "1234567";
	printf("s1 = 1234567 && s2 = 1234567 && n = 0\n");
	strncmp(s21, s22, 0) == ft_strncmp(s21, s22, 0) ? printf("				Correct") : printf("					Error");
	printf("\n");
	char	s23[] = "1234567";
	char	s24[] = "1234567";
	printf("s1 = 1234567 && s2 = 1234567 && n = 7\n");
	strncmp(s23, s24, 7) == ft_strncmp(s23, s24, 7) ? printf("				Correct") : printf("					Error");
	printf("\n");
}
*/