/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalfred <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 11:09:25 by lalfred           #+#    #+#             */
/*   Updated: 2021/10/20 11:23:00 by lalfred          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*c;
	int		i;

	i = -1;
	if (!f || !s)
		return (NULL);
	c = ft_strdup(s);
	if (c == NULL)
		return (NULL);
	while (c[++i])
		c[i] = f(i, c[i]);
	return (c);
}
