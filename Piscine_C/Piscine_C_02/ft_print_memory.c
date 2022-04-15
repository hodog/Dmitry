/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalfred <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 16:17:15 by lalfred           #+#    #+#             */
/*   Updated: 2022/04/15 13:49:40 by lalfred          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	*ft_convert_to_hex(char c)
{
	char	*tmp;
	int		i;
	int		a;
	int		b;

	tmp = "0123456789abcdef";
	i = 0;
	a = 0;
	while (a < 8)
	{
		b = 0;
		while (b < 16)
		{
			if (i == c)
			{
				ft_putchar(tmp[a]);
				ft_putchar(tmp[b]);
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

	i = 0;
	a = addr;
	while (i <= 16)
	{
		
		ft_putchar('\n');
	}
	ft_putchar_address(a);
	return (0);
}

// Check :

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int main()
{
	char *str = "Salut les aminches c'est fsdfsdfds fsdfsdf dsf sdf dsf sdf                         \
    sdf dsfsd f sdf sdf sdf sdfsd fsdf,sdlkfmklsd fkjsdfkj dshfkj sdhkjfh sjkfhkjsdhf               \
    kjsdhkfjhsdkjfh ksdjhfkjsdhfkjhdskjf hdskj1111\nfh22222\fdhfk sdahfkah oih dsada                \
    nbviournaboirjgoarmebiaegiou herlkngvklgdfjhgilcftgpojwegml;kdfjkgludgodjf;lms;gjks[ppgpkfv     \
    opdskgpofjgprj gpfdgpodfk blofgjg pdo fjgporjkg; ldpog jdfpjg ;dfgl;kj doigj pioool show mem    \
    on fait de truc terrible\1\2";

	ft_print_memory(str, ft_strlen(str));

	// ###   OR  ###
	
	ft_print_memory(str, 0); // this needed to check this statemnent : "• If size equals to 0, nothing should be displayed.""
}
