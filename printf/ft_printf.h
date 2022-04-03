/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalfred <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 00:00:22 by lalfred           #+#    #+#             */
/*   Updated: 2022/01/13 00:00:22 by lalfred          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include "libft.h"

# define CONVERSIONS "cspdiuxX%"

typedef struct s_data
{
	int		minus;
	int		zero;
	int		width;
	int		precision;
	char	conv;
	int		nbr_base;
	int		nbr_sign;
}			t_data;

int		ft_printf(const char *format, ...);
int		print_char(int c, t_data *data);
int		print_str(char *str, t_data *data);
int		put_width_str(char **buf, t_data *data);
int		print_nbr(unsigned long long nbr, t_data *data);
void	i_data(t_data *data);
void	patch_data(t_data *data);
int		ft_nbrlen(unsigned long long nbr, t_data *data);
char	*ft_decimal(char conv);

#endif
