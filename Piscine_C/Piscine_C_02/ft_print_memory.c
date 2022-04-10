/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalfred <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 16:17:15 by lalfred           #+#    #+#             */
/*   Updated: 2022/04/10 18:58:17 by lalfred          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putchar_address(int a)
{
	write(1, &a, 16);
}
/*
void	ft_str_print(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}
*/
void	*ft_convert_to_hex(char c)
{
	char	*fst;
	char	*snd;
	int		i;
	int		a;
	int		b;

	fst = "01234567";
	snd = "0123456789abcdef";
	i = 0;
	a = 0;
	while (a < 8)
	{
		b = 0;
		while (b < 16)
		{
			if (i == c)
			{
				ft_putchar(fst[a]);
				ft_putchar(snd[b]);
				break ;
			}
			b++;
		}
		a++;
	}
	return (0);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	int		i;
	char	*a;
	int		address;

	i = 0;
	addr = a;
	*a = &address;
	ft_putchar_address(address);
	return (0);
}

int	main(void)
{
	char 			str[] = "Bonjour les amin";
	unsigned int	size = 16;
	
	ft_print_memory(str, size);
	return (0);
}
