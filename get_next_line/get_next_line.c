/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalfred <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 21:28:52 by lalfred           #+#    #+#             */
/*   Updated: 2022/01/04 17:31:15 by lalfred          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int	buff_to_list(t_buff *buff, t_list *list, int *l_s)
{
	int	end_of_line;

	end_of_line = 0;
	while ((buff->read_ch > 0) && (buff->arr[buff->idc] != '\n'))
	{
		list->arr[list->len] = buff->arr[buff->idc];
		buff->idc++;
		list->len++;
		buff->read_ch--;
		*l_s = *l_s + 1;
	}
	if ((buff->read_ch > 0) && (buff->arr[buff->idc] == '\n'))
	{
		end_of_line = 1;
		list->arr[list->len] = buff->arr[buff->idc];
		buff->idc++;
		list->len++;
		*l_s = *l_s + 1;
		buff->read_ch--;
	}
	if (buff->read_ch == 0)
		buff->idc = 0;
	return (end_of_line);
}

static t_list	*read_list(t_buff *buff, t_list *list, int *l_s, int fd)
{
	if (buff_to_list(buff, list, l_s))
		return (list);
	buff->read_ch = read(fd, buff->arr, BUFFER_SIZE);
	while (buff->read_ch > 0)
	{
		list = lst_next(list);
		if (!list)
			return (NULL);
		if (buff_to_list(buff, list, l_s))
			return (list);
		buff->read_ch = read(fd, buff->arr, BUFFER_SIZE);
	}
	if (buff->read_ch == -1)
	{
		buff->read_ch = 0;
		return (NULL);
	}
	return (list);
}

static char	*out_res(t_list *list, char **res, int res_size)
{
	unsigned int	res_i;
	unsigned int	list_j;

	if (res_size == 0)
		return (NULL);
	*res = (char *)malloc(sizeof(char) * (res_size + 1));
	if (!*res)
		return (NULL);
	res_i = 0;
	while (list)
	{
		list_j = 0;
		while (list_j < list->len)
		{
			(*res)[res_i] = list->arr[list_j];
			res_i++;
			list_j++;
		}
		list = list->next;
	}
	(*res)[res_size] = '\0';
	return (*res);
}

static char	*get_finish_line(t_buff *buff, int fd)
{
	t_list			*list;
	char			*line;
	int				line_size;

	line_size = 0;
	line = NULL;
	list = new_lst();
	if (!list)
		return (NULL);
	if (!read_list(&buff[fd], list, &line_size, fd))
	{
		lst_clear(&list);
		return (NULL);
	}
	out_res(list, &line, line_size);
	lst_clear(&list);
	return (line);
}

char	*get_next_line(int fd)
{
	static t_buff	buffs[OPEN_MAX];

	if (fd < 0 || fd > OPEN_MAX || BUFFER_SIZE < 1)
		return (NULL);
	return (get_finish_line(buffs, fd));
}
