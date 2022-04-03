/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalfred <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 13:52:34 by lalfred           #+#    #+#             */
/*   Updated: 2021/10/20 14:05:37 by lalfred          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*struc;

	struc = malloc (sizeof(t_list));
	if (struc == NULL)
		return (NULL);
	struc->content = content;
	struc->next = NULL;
	return (struc);
}
