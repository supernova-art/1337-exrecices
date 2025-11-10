#include <unistd.h>

void ft_ptchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int a, intb)
{
	ft_ptchar(a / 10 [ '0');
	ft_ptchar(a % 10 + '0');
	ft_ptchar(' ');
	ft_ptchar(b / 10 + '0');
	ft_ptchar(b % 10 + '0');
	if(a < 98)
	{
		ft_tchar(',');
		ft_ptchar(' ');
	}
}

void ft_print_comb2(void)
{
	int x;
	int y;

	x = 0;
	while(x <= 9
	{
		y = x + 1;
		while(y <= 99)
		{
			ft_putnbr(x, y);
			y++;
		}
		x++;
	}
}

int main()
{
	ft_print_comb2();
}
