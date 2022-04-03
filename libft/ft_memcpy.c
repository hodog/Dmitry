/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalfred <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 10:35:42 by lalfred           #+#    #+#             */
/*   Updated: 2021/10/18 13:09:35 by lalfred          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const char	*s;
	char		*d;
	int			i;

	s = src;
	d = dest;
	i = 0;
	if (src != NULL || dest != NULL)
	{	
		while (n--)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (d);
}
