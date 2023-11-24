#include <unistd.h>
void	ft_putchar(char str)
{
	write (1, &str, 1);
}



void	ft_putnbr(int nb)
{
	unsigned int i;

	i = nb;
	if (nb < 0)
	{
		i = -nb;
		ft_putchar('-'); 
	}
	if (i >= 10)
	{
		ft_putnbr(i / 10);
		ft_putnbr(i % 10);
	}
	else
		ft_putchar(i + '0');
}

#include <stdlib.h>
int	main(int argc, char **argv)
{
	if (argc == 2)
	ft_putnbr(atoi(argv[1]));
	return (0);
}
