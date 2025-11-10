#include <stdio.h>

void ft_rev_int_tab(int *tab, int size)
{
	int tmp;
	int first;
	int last;

	first = 0;
	last = size - 1;

	tmp = tab[first];
	tab[first] = tab[last];
	tab[last] = tmp;
	first++;
	last--;
}


int main()
{
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	int size = 10;
	int i;

	ft_rev_int_tab(arr, size);
	printf("Reversed arr : ");

	i = 0;
	while(i < size)
	{
		printf("%d ", arr[i]);
		i++;
	}

	printf("\n");
	return 0;
}
