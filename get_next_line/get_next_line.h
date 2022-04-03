/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalfred <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/01 13:51:15 by lalfred           #+#    #+#             */
/*   Updated: 2022/01/05 10:53:42 by lalfred          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

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