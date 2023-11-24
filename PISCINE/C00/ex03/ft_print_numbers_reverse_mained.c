#include <unistd.h>
void ft_print_numbers(void)
{
	char nb;
	nb = '9';
	while (nb >= '0')
	{
		write(1, &nb, 1);
		nb = nb - 1;
	}
}

int main(void)
{
	ft_print_numbers();
}
