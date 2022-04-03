/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalfred <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 13:14:38 by lalfred           #+#    #+#             */
/*   Updated: 2021/10/18 15:09:42 by lalfred          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t		n;

	n = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while ((src[n] != '\0' && n < (dstsize - 1)))
	{
		dst[n] = src[n];
		n++;
	}
	dst[n] = '\0';
	return (ft_strlen(src));
}
