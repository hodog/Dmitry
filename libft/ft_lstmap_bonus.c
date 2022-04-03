/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalfred <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 10:29:28 by lalfred           #+#    #+#             */
/*   Updated: 2021/10/21 13:25:39 by lalfred          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*suclst;
	t_list	*element;

	if (!lst)
		return (NULL);
	suclst = 0;
	while (lst)
	{
		element = ft_lstnew(f(lst->content));
		if (!element)
		{
			ft_lstclear(&suclst, del);
			return (NULL);
		}
		ft_lstadd_back(&suclst, element);
		lst = lst->next;
	}
	return (suclst);
}
