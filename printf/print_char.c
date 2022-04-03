/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_char.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalfred <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 00:00:44 by lalfred           #+#    #+#             */
/*   Updated: 2022/01/13 00:00:44 by lalfred          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	put_width(int width, int len, int zero);

static int	put_width(int width, int len, int zero)
{
	int	ret;

	ret = 0;
	while (len < width)
	{
		if (zero == 1)
			ft_putchar_fd('0', 1);
		else
			ft_putchar_fd(' ', 1);
		len++;
		ret++;
	}
	return (ret);
}

int	print_char(int c, t_data *data)
{
	int	ret;

	ret = 0;
	if (data->conv == '%' && data->minus == 1)
		data->zero = 0;
	if (data->minus == 1)
	{
		ft_putchar_fd(c, 1);
		ret++;
	}
	ret += put_width(data->width, 1, data->zero);
	if (data->minus == 0)
	{
		ft_putchar_fd(c, 1);
		ret++;
	}
	return (ret);
}
