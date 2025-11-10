#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int main()
{
	int a = 2025;
	int b = 2005;
	int div;
	int mod;

	ft_div_mod(a, b, &div, &mod);
	printf("DIVISION : %d\n", div);
	printf("MODULO : %d\n", mod);
}
