#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b)
{
	int tmp;

	tmp = *a / *b;
	*b = *a % *b;
	*a = tmp;
}

int main()
{
	int a = 45;
	int b = 5;
	ft_ultimate_div_mod(&a , &b);
	printf("a = %d\n", a);
	printf("b = %d\n" , b);
}
