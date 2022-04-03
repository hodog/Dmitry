/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalfred <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 13:11:32 by lalfred           #+#    #+#             */
/*   Updated: 2021/10/22 10:46:44 by lalfred          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*cal;
	size_t	total;

	cal = malloc(count * size);
	if (cal == ((void *)0))
		return ((void *)0);
	total = count * size;
	ft_bzero(cal, total);
	return (cal);
}
