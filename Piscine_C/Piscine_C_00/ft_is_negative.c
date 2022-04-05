/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalfred <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 23:04:56 by lalfred           #+#    #+#             */
/*   Updated: 2022/04/04 23:12:46 by lalfred          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n >= 0)
		write(1, "P", 1);
	else
		write(1, "N", 1);
}

// for check:
/*
int main ()
{
	ft_is_negative(1);
		ft_is_negative(-1);
			ft_is_negative(0);
				ft_is_negative(100);
					ft_is_negative(-100);
}
*/
