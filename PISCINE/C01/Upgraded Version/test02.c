extern void ft_swap(int*, int*);

#include <stdio.h>

int main() {
	int a, b;

	// test 01
	printf("\033[96m====== TEST ft_swap(01) ======\033[39m\n");
	a = 0; b = 2;
	ft_swap(&a, &b);
	printf("\033[36mvaleurs attendue :\033[39m\na = 2\nb = 0\n");
	printf("\033[36mvaleurs obtenue  :\033[39m\na = %d\nb = %d\n", a, b);

	// test 02
	printf("\033[96m====== TEST ft_swap(02) ======\033[39m\n");
	a = 7; b = 1;
	ft_swap(&a, &b);
	printf("\033[36mvaleurs attendue :\033[39m\na = 1\nb = 7\n");
	printf("\033[36mvaleurs obtenue  :\033[39m\na = %d\nb = %d\n", a, b);

	// test 03
	printf("\033[96m====== TEST ft_swap(03) ======\033[39m\n");
	a = 23; b = 3;
	ft_swap(&a, &b);
	printf("\033[36mvaleurs attendue :\033[39m\na = 3\nb = 23\n");
	printf("\033[36mvaleurs obtenue  :\033[39m\na = %d\nb = %d\n", a, b);

	// test 04
	printf("\033[96m====== TEST ft_swap(04) ======\033[39m\n");
	a = 1; b = 43;
	ft_swap(&a, &b);
	printf("\033[36mvaleurs attendue :\033[39m\na = 43\nb = 1\n");
	printf("\033[36mvaleurs obtenue  :\033[39m\na = %d\nb = %d\n", a, b);

	// end for tests
	printf("\033[96m========= FIN DES TESTS =========\033[39m\n");
	return 0;
}
