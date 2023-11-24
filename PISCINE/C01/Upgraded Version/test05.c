extern void ft_putstr(char *);

#include <stdio.h>

int main() {
	// test 01
	printf("\033[96m====== TEST ft_putstr(01) ======\033[39m\n");
	printf("\033[36mvaleurs attendue :\033[39m\nHello, world!\n");
	printf("\033[36mvaleurs obtenue  :\033[39m\n");
	ft_putstr("Hello, world!\n");

	// test 02
	printf("\033[96m====== TEST ft_putstr(02) ======\033[39m\n");
	printf("\033[36mvaleurs attendue :\033[39m\n\\\"\n");
	printf("\033[36mvaleurs obtenue  :\033[39m\n");
	ft_putstr("\\\"\n");

	// test 03
	printf("\033[96m====== TEST ft_putstr(03) ======\033[39m\n");
	printf("\033[36mvaleurs attendue :\033[39m\n\033[32mHello colors\033[39m\n");
	printf("\033[36mvaleurs obtenue  :\033[39m\n");
	ft_putstr("\033[32mHello colors\033[39m\n");

	// test 04
	printf("\033[96m====== TEST ft_putstr(04) ======\033[39m\n");
	printf("\033[36mvaleurs attendue :\033[39m\n");
	printf("\033[36mvaleurs obtenue  :\033[39m\n");
	ft_putstr("");

	// end for tests
	printf("\033[96m========= FIN DES TESTS =========\033[39m\n");
	return 0;
}
