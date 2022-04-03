/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalfred <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 15:26:01 by lalfred           #+#    #+#             */
/*   Updated: 2021/10/20 16:20:10 by lalfred          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	last = *lst;
	if (last && *lst)
	{
		while (last->next)
		{
			last = last->next;
		}
		last->next = new;
	}
	else if (lst)
		*lst = new;
}
