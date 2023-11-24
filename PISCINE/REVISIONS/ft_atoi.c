#include <stdio.h>
#include <unistd.h>

int ft_atoi(char *str)
{
	int i;
	int j;
	int nb;

	i = 0;
	j = 1;
	nb = 0;
	if (str[i] == ' ' || str[i] == '+')
		i++;
	if (str[i] == '-')
	{
		j *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = (nb * 10) + (str[i] - 48);
		i++;
	}
	return (nb * j);
}

int main(void)
{
	printf("%d", ft_atoi(""));
	return (0);
}
