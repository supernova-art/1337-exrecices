#include <unistd.h>
void put_char(char c)
{
	write(1, &c, 1);
}

void put_nbr(int n)
{
	if(n < 0)
	{
		put_char('_');
		n = -n;
	}
	if(n > 9)
	{
		put_nbr(n / 10);
	}
	put_char(n % 10 + '0');
}

void ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

int main() //int main on the way of write fct
{
	int a = 0;
	int *p;
	int **p2;
	int ***p3;
	int ****p4;
	int *****p5;
	int ******p6;
	int *******p7;
	int ********p8;
	int *********p9;

	p = &a;
	p2 = &p;
	p3 = &p2;
	p4 = &p3;
	p5 = &p4;
	p6 = &p5;
	p7 = &p6;
	p8 = &p7;
	p9 = &p8;

	ft_ultimate_ft(p9);
	put_nbr(a);
	put_char('\n');
	return 0;

}
