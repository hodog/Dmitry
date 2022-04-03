/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalfred <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 17:07:11 by lalfred           #+#    #+#             */
/*   Updated: 2021/10/21 10:15:32 by lalfred          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void	*))
{
	t_list	*s;

	if (!*lst)
		return ;
	while (*lst)
	{
		s = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = s;
	}
	*lst = NULL;
}
