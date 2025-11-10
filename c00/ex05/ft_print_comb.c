#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int nb)
{

	if(nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putchar(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}

void ft_print_comb(void)
{
	int a;
	int b;
	int c;

	a = 0;
		while(a <= 7)
		{
			b = a + 1;
			while(b <= 8)
			{
				c = b + 1;
				while(c <= 9)
				{
					ft_putnbr(a);
					ft_putnbr(b);
					ft_putnbr(c);
					if(a < 7)
					{
						ft_putchar(',');
						ft_putchar(' ');
					}
					c++;
				}
				b++;
			}
			a++;
		}
}

int main()
{
	ft_print_comb();
}
