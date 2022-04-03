/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_str.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalfred <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 00:00:51 by lalfred           #+#    #+#             */
/*   Updated: 2022/01/13 00:00:51 by lalfred          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	*parse_buf(char *str, int end, int len);

static char	*parse_buf(char *str, int end, int len)
{
	int		i;
	char	*buf;

	if (end > len)
		end = len;
	buf = (char *)malloc(sizeof(char) * end + 1);
	if (!buf)
		return (NULL);
	i = 0;
	while (i < end)
	{
		buf[i] = str[i];
		i++;
	}
	buf[i] = '\0';
	return (buf);
}

int	put_width_str(char **buf, t_data *data)
{
	char	*width;
	int		i;

	if (data->width <= (int)ft_strlen(*buf))
		return ((int)ft_strlen(*buf));
	width = (char *)malloc(sizeof(char) * (data->width - ft_strlen(*buf) + 1));
	if (!width)
		return (0);
	i = 0;
	while ((size_t)i < data->width - ft_strlen(*buf))
	{
		if (data->zero == 1 && data->minus == 0)
			width[i] = '0';
		else
			width[i] = ' ';
		i++;
	}
	width[i] = '\0';
	if (data->minus == 0)
		*buf = ft_strjoin(width, *buf);
	else
		*buf = ft_strjoin(*buf, width);
	return (data->width);
}

int	print_str(char *str, t_data *data)
{
	int		ret;
	char	*buf;

	ret = 0;
	if (str == NULL)
		str = "(null)";
	if (data->precision == -1 || (size_t)data->precision > ft_strlen(str))
		data->precision = ft_strlen(str);
	buf = parse_buf(str, data->precision, ft_strlen(str));
	ret = put_width_str(&buf, data);
	ft_putstr_fd(buf, 1);
	free(buf);
	return (ret);
}
