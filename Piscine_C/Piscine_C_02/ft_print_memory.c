/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalfred <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 16:17:15 by lalfred           #+#    #+#             */
/*   Updated: 2022/04/17 21:41:47 by lalfred          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
			s += '0';
		else
			s -= 10 + 'a';
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
		fputstr("0");
	hex(c);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	char	buf[9];
	int		n;
	int		v;
	int		i;
	char	c;

	buf[8] = 0;
	i = 0;
	while (i < size)
	{
		n = i;
		for (int j = 9; j >= 0; j--)
		{
			v = n % 16;
			buf[j] = v < 10 ? v + '0' : v - 10 + 'a';
			n /= 16;
		}
		fputstr(buf);
		fputstr(": ");
		for (int j = 0; j < 16; j += 2)
		{
			print(((char *)addr + i)[j]);
			print(((char *)addr + i)[j + 1]);
			fputstr(" ");
		}
		for (int j = 0; j < 16; j++)
		{
			c = ((char *)addr + i)[j];
			if (c > 31 && c < 127)
				write(1, &c, 1);
			else
				write(1, ".", 1);
		}
		fputstr("\n");
		i += 16;
	}
	return addr;
}

// Check :

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
	
	ft_print_memory(str, 0); // this needed to check this statemnent : "• If size equals to 0, nothing should be displayed.""
}
