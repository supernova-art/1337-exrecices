#include <stdio.h>

void ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

int main() //int main using printf fct
{
	int a;
	a = 0;
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
	printf("the pointers are giving us: %d\n", a);
} 
