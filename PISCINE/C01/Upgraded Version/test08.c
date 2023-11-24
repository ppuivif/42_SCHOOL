extern void ft_sort_int_tab(int *, int);

#include <stdio.h>

int main() {

	// test 01
	{
	printf("\033[96m====== TEST ft_sort_int_tab(01) ======\033[39m\n");
	int tab[6] = {1,2,4,5,8,7};
	int size = 6;
	ft_sort_int_tab(tab, size);
	printf("\033[36mvaleurs attendue :\033[39m\ntab[0] = 1\ntab[1] = 2\ntab[2] = 4\ntab[3] = 5\ntab[4] = 7\ntab[5] = 8\n");
	printf("\033[36mvaleurs obtenue  :\033[39m\n");
	for (int i = 0; i < size; i++)
        	printf("tab[%u] = %d\n", i, tab[i]);
        }
	// test 02
	{
	printf("\033[96m====== TEST ft_sort_int_tab(02) ======\033[39m\n");
	int tab[1] = {42};
	int size = 1;
	ft_sort_int_tab(tab, size);
	printf("\033[36mvaleurs attendue :\033[39m\ntab[0] = 42\n");
	printf("\033[36mvaleurs obtenue  :\033[39m\n");
	for (int i = 0; i < size; i++)
        	printf("tab[%u] = %d\n", i, tab[i]);
	}
	// test 03
	{
	printf("\033[96m====== TEST ft_sort_int_tab(03) ======\033[39m\n");
	int tab[0] = {};
	int size = 0;
	ft_sort_int_tab(tab, size);
	printf("\033[36mvaleurs attendue :\033[39m\n\n");
	printf("\033[36mvaleurs obtenue  :\033[39m\n\n");
	for (int i = 0; i < size; i++)
        	printf("tab[%u] = %d\n", i, tab[i]);
	}
	// test 03
	{
	printf("\033[96m====== TEST ft_sort_int_tab(04) ======\033[39m\n");
	int tab[16] = {3,2,4,-3,-8,2,-1,5,7,8,42,6,3,3,4,8};
	int size = 16;
	ft_sort_int_tab(tab, size);
	printf("\033[36mvaleurs attendue :\033[39m\ntab[0] = -8\ntab[1] = -3\ntab[2] = -1\ntab[3] = 2\ntab[4] = 2\ntab[5] = 3\ntab[6] = 3\ntab[7] = 3\ntab[8] = 4\ntab[9] = 4\ntab[10] = 5\ntab[11] = 6\ntab[12] = 7\ntab[13] = 8\ntab[14] = 8\ntab[15] = 42\n");
	printf("\033[36mvaleurs obtenue  :\033[39m\n");
	for (int i = 0; i < size; i++)
        	printf("tab[%u] = %d\n", i, tab[i]);
	}
	// end for tests
	printf("\033[96m========= FIN DES TESTS =========\033[39m\n");
	return 0;
}
