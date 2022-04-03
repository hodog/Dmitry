/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_general.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalfred <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 22:38:49 by lalfred           #+#    #+#             */
/*   Updated: 2022/01/14 01:05:09 by lalfred          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	i_data(t_data *data)
{
	data->minus = 0;
	data->zero = 0;
	data->width = 0;
	data->precision = -1;
	data->conv = 0;
	data->nbr_base = 10;
	data->nbr_sign = 1;
}

void	patch_data(t_data *data)
{
	if (data->conv != '%' && data->conv != 's')
		if (data->minus == 1 || data->precision > -1)
			data->zero = 0;
}

int	ft_nbrlen(unsigned long long nbr, t_data *data)
{
	int	i;

	if (nbr == 0 && data->precision != 0)
		return (1);
	i = 0;
	while (nbr)
	{
		i++;
		nbr /= data->nbr_base;
	}
	return (i);
}

char	*ft_decimal(char conv)
{
	if (conv == 'u' || conv == 'd' || conv == 'i')
		return ("0123456789");
	else if (conv == 'x' || conv == 'p')
		return ("0123456789abcdef");
	else if (conv == 'X')
		return ("0123456789ABCDEF");
	return (0);
}
