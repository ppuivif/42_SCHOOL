void ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;	
}

#include <stdio.h>
#include <stdlib.h>
int main (int argc, char **argv)
{
	int a;
	int b;
	int div;
	int mod;
	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		ft_div_mod(a, b, &div, &mod);
		printf("%d\n", div);
		printf("%d", mod);
	}
	return (0);
}
