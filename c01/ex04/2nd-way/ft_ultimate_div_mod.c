#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void print_nbr(int nb)
{
	if(nb > 9)
	{
		print_nbr(nb / 10);
	}
	ft_putchar(nb % 10 + '0');
}

void ft_ultimate_div_mod(int *a , int *b)
{
	int tmp;

	tmp = *a / *b; //tmp = 9
	*b = *a % *b; //b = 0
	*a = tmp;//a = 9
	/*but if we changed the order of *a & *b
	 * we will see an unexpected behavior 
	 * becuz for examle if re writing 
	 * tmp = *a / *b; tmp = 9
	 * *a = tmp ; a = 9
	 * *b = *a % *b; *b = 9 % 5 = 4 & NOT 0*/
}

int main()
{
	int a = 45;
	int b = 5;

	ft_ultimate_div_mod(&a, &b);

	ft_putchar('a');
	ft_putchar('=');
	print_nbr(a);
	ft_putchar('\n');

	ft_putchar('b');
	ft_putchar('=');
	print_nbr(b);
	ft_putchar('\n');

}
