#include <unistd.h>

void ft_print_alphabet(void)
{
	write(1, "abcdefghijklmnopqrstuvwxzy", 26);
}
int main()
{
	ft_print_alphabet();
}
