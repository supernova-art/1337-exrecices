#include <stdio.h>

int ft_strlen(char *str)
{
	int i;
	i = 0;
	while(str[i])
	{
		i++;
	}
	return i;
}

int main()
{
	char *a;
	int len;
	a = "fuck system";
	len = ft_strlen(a);
	printf("the string lenth is %d\n", len);
}
