#include <unistd.h>

void ft_print_alphabet(void)
{
	int i;
	i = 97;
	while(i <= 122)
	{
		write(1, &i, 1);
		write(1, " ", 1);
		i++;
	}
}
int main()
{
	ft_print_alphabet();
}
