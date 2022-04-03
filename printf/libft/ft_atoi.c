/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalfred <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 09:50:11 by lalfred           #+#    #+#             */
/*   Updated: 2022/01/13 00:19:42 by lalfred          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_max(unsigned long long nbr, unsigned long long max, int flag)
{
	if (nbr > max && flag == 0)
		return (-1);
	else if (nbr > max && flag == 1)
		return (0);
	return (0);
}

static int	ft_flag(const char *str, int i)
{
	int	flag;

	flag = 0;
	if (str[i] != '\0' && str[i] == '-')
	{
		flag = 1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	return (flag);
}

static int	spaces(const char *s, int i)
{
	while (s[i] == ' ' || (9 <= s[i] && s[i] <= 13) || s[i] == '\n')
		++i;
	return (i);
}

int	ft_atoi(const char *str)
{
	size_t				i;
	unsigned long long	nbr;
	int					flag;
	unsigned long long	max;

	i = 0;
	nbr = 0;
	flag = 0;
	max = 9223372036854775807;
	i = spaces(str, i);
	if (str[i])
	{
		flag = ft_flag(str, i);
		if ((str[i] != '\0' && str[i] == '-') || (str[i] == '+'))
			i++;
	}
	while (str[i] != '\0' && ft_isdigit(str[i]))
	{
		nbr = (nbr * 10) + (str[i++] - '0');
		if ((nbr > max && flag == 0) || (nbr > max && flag == 1))
			return (ft_max(nbr, max, flag));
	}
	if (flag == 1)
		return ((-nbr));
	return (nbr);
}
