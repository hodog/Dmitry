/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalfred <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 13:11:55 by lalfred           #+#    #+#             */
/*   Updated: 2021/10/18 13:12:53 by lalfred          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;
	unsigned char		ch;

	str = s;
	ch = c;
	if (n != 0)
	{
		while (n--)
		{
			if (*str++ == ch)
			{
				return ((void *)(str - 1));
			}
		}
	}
	return (NULL);
}
