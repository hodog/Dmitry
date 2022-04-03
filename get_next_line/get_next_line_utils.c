/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalfred <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 17:32:04 by lalfred           #+#    #+#             */
/*   Updated: 2022/01/04 17:32:23 by lalfred          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

t_list	*new_lst(void)
{
	t_list	*n_list;

	n_list = (t_list *)malloc(sizeof(t_list));
	if (!n_list)
		return (NULL);
	n_list->len = 0;
	n_list->next = NULL;
	return (n_list);
}

t_list	*lst_next(t_list *last)
{
	if (!last)
		return (NULL);
	last->next = new_lst();
	return (last->next);
}

void	lst_delone(t_list *crnt)
{
	if (crnt)
		free(crnt);
}

void	lst_clear(t_list **list)
{
	t_list	*follow;
	t_list	*crnt;

	if (*list)
	{
		follow = *list;
		while (follow)
		{
			crnt = follow;
			follow = crnt->next;
			lst_delone(crnt);
		}
		lst_delone(follow);
		*list = NULL;
	}
}
