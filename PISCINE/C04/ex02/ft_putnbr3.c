
#include <unistd.h>
#include <stdlib.h>
void	ft_putchar(int nb)
{
	write (1, &nb, 1);
}



void	ft_putnbr(int nb)
{
	int	i;


	i = 0;
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	if (nb < 0)
	{
		i = -1;
		nb = nb * i;
		write (1, "-", 1);
	}
	if (nb > 0)
	{
		ft_putnbr(nb / 10);
		nb %= 10;
		nb = nb + '0';
		ft_putchar(nb);
	}
}

/*int main (void)
{
	int nb = 42;
	ft_putnbr(nb);
	return (0);
}*/

int	main(int argc, char **argv)
{
	if (argc == 2)
		ft_putnbr(atoi(argv[1]));
	return (0);
}
