
void atoi

int ft_sqrt(int nb)
{
	int i;
	i = 1;
	while (i < nb && i <= 46340)
	{
		if (i * i == nb)
			return (i);
		else
			i++;
	}
	return (0);
}
#include <stdio.h>
int main(int argc, char **argv)//argc - argv requiert un char d'ou un atoi necessaire
{
	if (argc ==2)
		printf("%d",ft_sqrt(argv[2]));
	return(0);
}
