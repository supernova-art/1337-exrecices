
#include <stdio.h>

void ft_swap(int *a, int *b)
{
	int tmp;
	
	tmp = *a;
	*a = *b;
	*b = tmp;
}

int main()
{
	int x = 2;
	int y = 1;
	printf("before swap : %d , %d\n", x , y);
	ft_swap(&x , &y);
	printf("after swap :  %d , %d", x, y);
}
