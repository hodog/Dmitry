#include <unistd.h>

/*
void ft_putchar_address(char *c)
{
    write(1, c, 16);
}

void ft_putchar_address_int(int c)
{
    write(1, &c, 1);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	int		i;
	char	*a;
	int		*address;

    address = addr;
    ft_putchar_address(addr);
    ft_putchar_address_int(*address);
	//i = 0;
	//a = addr;
	//address = a;
	//ft_putchar_address(*address);
	return (0);
}

int	main(void)
{
	char 			str[] = "Bonjour les amin";
	unsigned int	size = 16;
	
	ft_print_memory(str, size);
	return (0);
}

*/

void ft_putchar(char c)
{
    write(1, &c, 1);
}

static void	print_hex(int i, unsigned int size, unsigned char *p)
{
	char			*str;
	unsigned int	j;

	j = 0;
	str = "0123456789abcdef";
	while (j < 16 && i + j < size)
	{
		ft_putchar((char)str[(*(p + i + j) / 16) % 16]);
		ft_putchar((char)str[*(p + i + j) % 16]);
		if (j % 2)
			ft_putchar(' ');
		j += 1;
	}
	while (j < 16)
	{
		ft_putchar(' ');
		ft_putchar(' ');
		if (j % 2)
			ft_putchar(' ');
		j += 1;
	}
}

void		ft_print_memory(void *addr, unsigned int size)
{
	char			*str;
	unsigned int	i;
	unsigned int	j;
	unsigned char	*p;

	str = "0123456789abcdef";
	p = (unsigned char *)addr;
	i = 0;
	while (i < size)
	{
		print_hex(i, size, p);
		j = 0;
		while (j < 16 && i + j < size)
		{
			if (*(p + i + j) >= 32 && *(p + i + j) <= 126)
				ft_putchar((char)*(p + i + j));
			else
				ft_putchar('.');
			j += 1;
		}
		ft_putchar('\n');
		i += 16;
	}
}

#include <stdlib.h>
#include <stdio.h>

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
	char *str = "Salut les aminches c'est cool show mem on fait de truc terrible\1\2";
    char *new;
    int i;
    
    new = (char *)malloc(sizeof(*new) * (17));
    new = str;
	ft_print_memory(new, 16);
	ft_print_memory(new, 0);
}