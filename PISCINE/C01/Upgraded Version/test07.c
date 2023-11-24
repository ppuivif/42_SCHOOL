extern void ft_rev_int_tab(int *, int);

#include <stdio.h>

int main() {

	// test 01
	{
	printf("\033[96m====== TEST ft_rev_int_tab(01) ======\033[39m\n");
	int tab[6] = {1,2,4,5,8,7};
	int size = 6;
	ft_rev_int_tab(tab, size);
	printf("\033[36mvaleurs attendue :\033[39m\ntab[0] = 7\ntab[1] = 8\ntab[2] = 5\ntab[3] = 4\ntab[4] = 2\ntab[5] = 1\n");
	printf("\033[36mvaleurs obtenue  :\033[39m\n");
	for (int i = 0; i < size; i++)
        	printf("tab[%u] = %d\n", i, tab[i]);
        }
	// test 02
	{
	printf("\033[96m====== TEST ft_rev_int_tab(02) ======\033[39m\n");
	int tab[1] = {42};
	int size = 1;
	ft_rev_int_tab(tab, size);
	printf("\033[36mvaleurs attendue :\033[39m\ntab[0] = 42\n");
	printf("\033[36mvaleurs obtenue  :\033[39m\n");
	for (int i = 0; i < size; i++)
        	printf("tab[%u] = %d\n", i, tab[i]);
	}
	// test 03
	{
	printf("\033[96m====== TEST ft_rev_int_tab(03) ======\033[39m\n");
	int tab[0] = {};
	int size = 0;
	ft_rev_int_tab(tab, size);
	printf("\033[36mvaleurs attendue :\033[39m\n\n");
	printf("\033[36mvaleurs obtenue  :\033[39m\n\n");
	for (int i = 0; i < size; i++)
        	printf("tab[%u] = %d\n", i, tab[i]);
	}
	// end for tests
	printf("\033[96m========= FIN DES TESTS =========\033[39m\n");
	return 0;
}
