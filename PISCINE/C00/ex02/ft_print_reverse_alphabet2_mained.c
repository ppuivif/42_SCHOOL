#include <unistd.h>
void ft_print_reverse_alphabet(void)
{
	char alpha;
	alpha = 97 + 25;
	while (alpha >= 97 && alpha <= 97 + 25)
	{
		write(1, &alpha, 1);
		alpha --;
	}
}

int	main(void)
{
	ft_print_reverse_alphabet();
}
