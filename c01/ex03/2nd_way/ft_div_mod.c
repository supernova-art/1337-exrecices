#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void print_numbers(int nb)
{
	if(nb > 9)
	{
		print_numbers(nb / 10);
	}

			ft_putchar(nb % 10 + '0');

}

void ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int main()
{
	int a = 45;
	int b = 5;
	int d;
	int m;

	ft_div_mod(a, b, &d, &m);

	ft_putchar('a');
	ft_putchar(' ');
	print_numbers(a);
	ft_putchar('\n');

	ft_putchar('b');
	ft_putchar(' ');
	print_numbers(b);
	ft_putchar('\n');

	ft_putchar('d');
	ft_putchar(' ');
	print_numbers(d);
	ft_putchar('\n');

	ft_putchar('m');
	ft_putchar(' ');
	print_numbers(m);
	ft_putchar('\n');
}
