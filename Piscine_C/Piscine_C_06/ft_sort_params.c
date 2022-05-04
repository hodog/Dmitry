/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalfred <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 10:06:49 by lalfred           #+#    #+#             */
/*   Updated: 2022/05/03 21:44:45 by lalfred          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_sort(char **str)
{
	int	i;
	int	j;
	int	n;
	int	m;
	
	if (str[n][i] < str[m][j])
	{
		
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	n;
	
	if (argc > 1)
	{
		n = ft_sort(*argv[n]);
		while (argv[n])
		{
			i = 0;
			while (argv[n][i])
			{
				write(1, &argv[n][i], 1);
				i++;
			}
			write(1, "\n", 1);
			n++;
		}
	}
	return (0);
}