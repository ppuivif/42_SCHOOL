extern void ft_ultimate_ft(int*********);

#include <stdio.h>

int main() {
	int mod = 10;
	int *a = &mod;
	int **b = &a;
	int ***c = &b;
	int ****d = &c;
	int *****e = &d;
	int ******f = &e;
	int *******g = &f;
	int ********h = &g;

	// test 01
	printf("\033[96m====== TEST ft_ultimate_ft(01) ======\033[39m\n");
	ft_ultimate_ft(&h);
	printf("\033[36mvaleurs attendue :\033[39m\n42\n");
	printf("\033[36mvaleurs obtenue  :\033[39m\n%d\n", mod);

	// end for tests
	printf("\033[96m========= FIN DES TESTS =========\033[39m\n");
	return 0;
}
