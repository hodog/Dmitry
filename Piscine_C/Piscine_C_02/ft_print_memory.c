/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalfred <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 16:17:15 by lalfred           #+#    #+#             */
/*   Updated: 2022/04/19 21:46:44 by lalfred          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// !!! ATTENTION !!!
// 	!!! NO Norm !!!

#include <unistd.h>

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

void	ft_putstr(char *s)
{
	while (*s)
		write(1, s++, 1);
}

void	hex(char s)
{
	char	c;

	if (s < 16)
	{
		c = s;
		if (s < 10)
			c = s + '0';
		else
			c = s - 10 + 'a';
		write(1, &c, 1);
	}
	else
	{
		hex(s / 16);
		hex(s % 16);
	}
}

void	print(char c)
{
	if (c < 16)
		ft_putstr("0");
	hex(c);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	char	buf[18];
	int		n;
	int		v;
	int		i;
	int		j;
	char	c;

	buf[17] = 0;
	i = 0;
	while (i < size)
	{
		n = i;
		j = 16;
		while (j >= 0)
		{
			v = n % 16;
			if (v < 10)
				buf[j] = v + '0';
			else
				buf[j] = v - 10 + 'a';
			n /= 16;
			j--;
		}
		ft_putstr(buf);
		ft_putstr(": ");
		j = 0;
		while (j < 16)
		{
			print(((char *)addr + i)[j]);
			print(((char *)addr + i)[j + 1]);
			ft_putstr(" ");
			j += 2;
		}
		j = 0;
		while (j < 16)
		{
			c = ((char *)addr + i)[j];
			if (c > 31 && c < 127)
				write(1, &c, 1);
			else
				write(1, ".", 1);
			j++;
		}
		ft_putstr("\n");
		i += 16;
	}
	return (addr);
}

// Check :
/*
int	main(void)
{
	char *str = "Salut les aminches c'est fsdfsdfds fsdfsdf dsf sdf dsf sdf \
    sdf dsfsd f sdf sdf sdf sdfsd fsdf,sdlkfmklsd fkjsdfkj dshfkj sdhkjfh sjkfhkjsdhf \
    kjsdhkfjhsdkjfh ksdjhfkjsdhfkjhdskjf hdskj1111\nfh22222\fdhfk sdahfkah oih dsada \
    nbviournaboirjgoarmebiaegiou herlkngvklgdfjhgilcftgpojwegml;kdfjkgludgodjf;lms;gjks[ppgpkfv \
    opdskgpofjgprj gpfdgpodfk blofgjg pdo fjgporjkg; ldpog jdfpjg ;dfgl;kj doigj pioool show mem \
    on fait de truc terrible\1\2";

	ft_print_memory(str, ft_strlen(str));

	// ###   OR  ###
	
	ft_print_memory(str, 0); // this line needed to check this statemnent : "• If size equals to 0, nothing should be displayed.""
}
*/