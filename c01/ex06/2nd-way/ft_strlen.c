#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_nbr(int nb)
{
	if(nb > 9)
	{
		ft_print_nbr(nb / 10);
	}
	ft_putchar(nb % 10 + '0');
}

int ft_strlen(char *str)
{
	int i;
	i = 0;
	while(str[i])
	{
		i++;
	}
	return i;
}

int main()
{
	char *y = "fuck system";
	int len = ft_strlen(y);
	ft_print_nbr(len);
}
