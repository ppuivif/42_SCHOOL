#include <unistd.h>
void ft_print_alphabet(void)
{
	char alpha;
	alpha = 'a';
	while (alpha <= 'z')
	{
		write(1, &alpha, 1);
		alpha = alpha +1;
	 
	}
}

int main(void)
{
	ft_print_alphabet();
	return (0);
}

