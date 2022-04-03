/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalfred <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 13:14:01 by lalfred           #+#    #+#             */
/*   Updated: 2021/10/18 16:14:48 by lalfred          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	int		length;

	length = ft_strlen(s1);
	str = (char *)malloc((length + 1) * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}
	ft_memcpy(str, s1, length + 1);
	return (str);
}
