/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalfred <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 13:21:52 by lalfred           #+#    #+#             */
/*   Updated: 2021/10/18 15:28:50 by lalfred          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	char	*buff;
	int		flag;

	flag = 0;
	str = (char *)s;
	if (s == 0 || c == 0)
		return ((char *)str + ft_strlen(s));
	while (*str)
	{
		if (*str == (char)c)
		{
			buff = str;
			flag = 1;
		}
		str++;
	}
	if (flag == 0)
		return (NULL);
	return (buff);
}
