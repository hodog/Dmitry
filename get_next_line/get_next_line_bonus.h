/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalfred <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 10:48:46 by lalfred           #+#    #+#             */
/*   Updated: 2022/01/05 10:53:38 by lalfred          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stdlib.h>
# include <unistd.h>

# define OPEN_MAX 10243

typedef struct s_buff
{
	char			arr[BUFFER_SIZE + 1];
	unsigned int	idc;
	int				read_ch;
}	t_buff;

typedef struct s_list
{
	char			arr[BUFFER_SIZE + 1];
	unsigned int	len;
	struct s_list	*next;
}	t_list;

t_list	*new_lst(void);
t_list	*lst_next(t_list *last);
void	lst_delone(t_list *crnt);
void	lst_clear(t_list **list);
char	*get_next_line(int fd);

#endif