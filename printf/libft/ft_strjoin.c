/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalfred <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 11:20:23 by lalfred           #+#    #+#             */
/*   Updated: 2021/10/19 12:05:25 by lalfred          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		length;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	length = ft_strlen(s1) + ft_strlen(s2);
	str = malloc((length + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	while (i < length)
	{
		if (i < (int)ft_strlen(s1))
			str[i] = s1[i];
		else
			str[i] = s2[j++];
		i++;
	}
	str[i] = '\0';
	return (str);
}
