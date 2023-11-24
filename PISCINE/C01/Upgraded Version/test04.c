extern void ft_ultimate_div_mod(int*, int*);

#include <stdio.h>

int main() {
	int div, mod;

	// test 01
	printf("\033[96m====== TEST ft_ultimate_div_mod(01) ======\033[39m\n");
	div = 12; mod = 6;
	ft_ultimate_div_mod(&div, &mod);
	printf("\033[36mvaleurs attendue :\033[39m\ndiv = 2\nmod = 0\n");
	printf("\033[36mvaleurs obtenue  :\033[39m\ndiv = %d\nmod = %d\n", div, mod);

	// test 02
	printf("\033[96m====== TEST ft_ultimate_div_mod(02) ======\033[39m\n");
	div = 15; mod = 8;
	ft_ultimate_div_mod(&div, &mod);
	printf("\033[36mvaleurs attendue :\033[39m\ndiv = 1\nmod = 7\n");
	printf("\033[36mvaleurs obtenue  :\033[39m\ndiv = %d\nmod = %d\n", div, mod);

	// test 03
	printf("\033[96m====== TEST ft_ultimate_div_mod(03) ======\033[39m\n");
	div = 323; mod = 100;
	ft_ultimate_div_mod(&div, &mod);
	printf("\033[36mvaleurs attendue :\033[39m\ndiv = 3\nmod = 23\n");
	printf("\033[36mvaleurs obtenue  :\033[39m\ndiv = %d\nmod = %d\n", div, mod);

	// test 04
	printf("\033[96m====== TEST ft_ultimate_div_mod(04) ======\033[39m\n");
	div = 130; mod = 3;
	ft_ultimate_div_mod(&div, &mod);
	printf("\033[36mvaleurs attendue :\033[39m\ndiv = 43\nmod = 1\n");
	printf("\033[36mvaleurs obtenue  :\033[39m\ndiv = %d\nmod = %d\n", div, mod);

	// end for tests
	printf("\033[96m========= FIN DES TESTS =========\033[39m\n");
	return 0;
}
