/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalfred <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 09:47:41 by lalfred           #+#    #+#             */
/*   Updated: 2022/05/03 10:06:10 by lalfred          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	int	n;
	int	i;

	if (argc > 1)
	{
		n = 0;
		while (argv[n + 1])
			n++;
		while (n > 0)
		{
			i = 0;
			while(argv[n][i])
			{
				write(1, &argv[n][i], 1);
				i++;
			}
			write(1, "\n", 1);
			n--;
		}
	}
	return (0);
}