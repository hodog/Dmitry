/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_nbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalfred <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 00:00:48 by lalfred           #+#    #+#             */
/*   Updated: 2022/01/13 00:00:48 by lalfred          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	put_pointer_prefix(char **buf);
static int	put_minus(t_data *data, char **buf);
static int	put_minus2(int buf_len, t_data *data, char **buf);
static int	put_precision_str(unsigned long long nbr, t_data *data, char **buf);

static int	put_pointer_prefix(char **buf)
{
	char	*tmp;

	tmp = ft_strjoin("0x", *buf);
	free(*buf);
	*buf = tmp;
	return (ft_strlen(*buf));
}

static int	put_minus(t_data *data, char **buf)
{
	int		len_to_add;
	char	*tmp;

	len_to_add = 0;
	if (data->nbr_sign != -1)
		return (len_to_add);
	if ((data->conv == 'i' || data->conv == 'd') && data->zero == 0)
	{
		tmp = ft_strjoin("-", *buf);
		free(*buf);
		*buf = tmp;
		len_to_add = 1;
	}
	return (len_to_add);
}

static int	put_minus2(int buf_len, t_data *data, char **buf)
{
	int		len_to_add;
	char	*tmp;

	len_to_add = 0;
	if (data->nbr_sign == -1 && data->zero == 1)
	{
		if (buf_len >= data->width)
		{
			tmp = ft_strjoin("-", *buf);
			free(*buf);
			*buf = tmp;
			len_to_add = 1;
		}
		else
			*buf[0] = '-';
	}
	return (len_to_add);
}

static int	put_precision_str(unsigned long long nbr, t_data *data, char **buf)
{
	int	buf_len;
	int	ret;
	int	i;

	buf_len = ft_nbrlen(nbr, data);
	ret = buf_len;
	if (data->precision > buf_len)
		ret = data->precision;
	*buf = (char *)malloc(sizeof(char) * ret + 1);
	if (!(*buf))
		return (0);
	i = 0;
	(*buf)[ret] = '\0';
	while (buf_len + i < ret)
		(*buf)[i++] = '0';
	i = 1;
	if (nbr == 0 && data->precision != 0)
		(*buf)[ret - i] = '0';
	while (nbr)
	{
		(*buf)[ret - i++] = ft_decimal(data->conv)[nbr % data->nbr_base];
		nbr /= data->nbr_base;
	}
	return (buf_len);
}

int	print_nbr(unsigned long long nbr, t_data *data)
{
	char	*buf;
	int		buf_len;
	int		ret;

	if (data->conv == 'x' || data->conv == 'X' || data->conv == 'p')
		data->nbr_base = 16;
	if ((data->conv == 'd' || data->conv == 'i') && (int)nbr < 0)
	{
		data->nbr_sign = -1;
		nbr = -nbr;
	}
	buf_len = put_precision_str(nbr, data, &buf);
	buf_len += put_minus(data, &buf);
	if (data->conv == 'p')
		buf_len = put_pointer_prefix(&buf);
	ret = put_width_str(&buf, data);
	ret += put_minus2(buf_len, data, &buf);
	ft_putstr_fd(buf, 1);
	free(buf);
	buf = NULL;
	return (ret);
}
