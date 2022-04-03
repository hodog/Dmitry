/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalfred <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 00:00:26 by lalfred           #+#    #+#             */
/*   Updated: 2022/01/13 00:00:26 by lalfred          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	check_format(va_list *ap, char *format);
static void	check_data(va_list *ap, char *format, t_data *data, int i);
static void	ch_width_precision(va_list *ap, char *format, t_data *data, int i);
static int	print_conv(va_list *ap, t_data *data);

static int	print_conv(va_list *ap, t_data *data)
{
	int		ret;
	char	conv;

	ret = 0;
	conv = data->conv;
	if (conv == 'c')
		ret = print_char(va_arg(*ap, int), data);
	else if (conv == '%')
		ret = print_char('%', data);
	else if (conv == 's')
		ret = print_str(va_arg(*ap, char *), data);
	else if (conv == 'd' || conv == 'i')
		ret = print_nbr(va_arg(*ap, int), data);
	else if (conv == 'x' || conv == 'X' || conv == 'u')
		ret = print_nbr(va_arg(*ap, unsigned int), data);
	else if (conv == 'p')
		ret = print_nbr(va_arg(*ap, unsigned long long), data);
	return (ret);
}

static void	ch_width_precision(va_list *ap, char *format, t_data *data, int i)
{
	if (ft_isdigit(format[i]))
	{
		if (data->precision == -1)
			data->width = data->width * 10 + format[i] - 48;
		else
			data->precision = data->precision * 10 + format[i] - 48;
	}
	else if (format[i] == '*')
	{
		if (data->precision == -1)
		{
			data->width = va_arg(*ap, int);
			if (data->width < 0)
			{
				data->minus = 1;
				data->width *= -1;
			}
		}
		else
			data->precision = va_arg(*ap, int);
	}
}

static void	check_data(va_list *ap, char *format, t_data *data, int i)
{
	if (format[i] == '0' && data->width == 0 && data->precision == -1)
		data->zero = 1;
	else if (format[i] == '-')
		data->minus = 1;
	else if (format[i] == '.')
		data->precision = 0;
	else if (ft_isdigit(format[i]) || format[i] == '*')
		ch_width_precision(ap, format, data, i);
}

static int	check_format(va_list *ap, char *format)
{
	int		i;
	int		ret;
	t_data	*data;

	i = 0;
	ret = 0;
	data = malloc(sizeof(t_data));
	if (!data)
		return (-1);
	while (format[i] != '\0')
	{
		while (format[i] != '%' && format[i] != '\0')
			ret += write(1, format + i++, 1);
		if (format[i] == '%')
		{
			i_data(data);
			while (format[i++] != '\0' && !(ft_strchr(CONVERSIONS, format[i])))
				check_data(ap, format, data, i);
			data->conv = format[i++];
			patch_data(data);
			ret += print_conv(ap, data);
		}
	}
	free(data);
	return (ret);
}

int	ft_printf(const char *format, ...)
{
	int		ret;
	va_list	ap;

	va_start(ap, format);
	ret = check_format(&ap, (char *)format);
	va_end(ap);
	return (ret);
}
