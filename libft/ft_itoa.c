/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalfred <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 09:50:11 by lalfred           #+#    #+#             */
/*   Updated: 2021/10/21 11:35:54 by lalfred          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_negative(int n)
{
	int	flag;

	flag = 0;
	if (n < 0)
	{
		flag = 1;
	}
	return (flag);
}

static int	ft_length(int n, int flag)
{
	int	i;

	i = 1;
	while ((n / 10))
	{
		n = n / 10;
		i++;
	}
	if (flag == 1)
		i++;
	return (i);
}

static char	*ft_reverse(char *s, int length, int flag)
{
	char	c;
	int		i;
	int		j;

	i = 0;
	j = length - 1;
	if (flag == 1)
	{
		s[length - 1] = '-';
	}
	while (i < j)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
		i++;
		j--;
	}
	return (s);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		max;
	int		flag;

	flag = 0;
	i = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	flag = ft_negative(n);
	if (flag == 1)
		n = n * (-1);
	max = ft_length(n, flag);
	str = (char *) malloc ((max + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	while (i < (max))
	{
		str[i] = n % 10 + '0';
		n = n / 10;
		i++;
	}
	str = ft_reverse(str, max, flag);
	str[max] = '\0';
	return (str);
}
