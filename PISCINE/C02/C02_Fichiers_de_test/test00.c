extern char *ft_strcpy(char *, char *);

#include <stdio.h>

int main() {
	char c[20];

	// test 01
	printf("\033[96m====== TEST ft_strcpy(01) ======\033[39m\n");
	ft_strcpy(c, "test01 OK");
	printf("\033[36mvaleurs attendue :\033[39m\ntest01 OK\n");
	printf("\033[36mvaleurs obtenue  :\033[39m\n%s\n", c);

	// test 02
	printf("\033[96m====== TEST ft_strcpy(02) ======\033[39m\n");
	ft_strcpy(c, "01234567890123456789");
	printf("\033[36mvaleurs attendue :\033[39m\n01234567890123456789\n");
	printf("\033[36mvaleurs obtenue  :\033[39m\n%s\n", c);

	// test 03
	printf("\033[96m====== TEST ft_strcpy(03) ======\033[39m\n");
	ft_strcpy(c, "fgh132%89N kjb\nJHKD");
	printf("\033[36mvaleurs attendue :\033[39m\nfgh132%%89N kjb\nJHKD\n");
	printf("\033[36mvaleurs obtenue  :\033[39m\n%s\n", c);

	// test 04
	printf("\033[96m====== TEST ft_strcpy(04) ======\033[39m\n");
	ft_strcpy(c, "");
	printf("\033[36mvaleurs attendue :\033[39m\n\n");
	printf("\033[36mvaleurs obtenue  :\033[39m\n%s\n", c);

	// end for tests
	printf("\033[96m========= FIN DES TESTS =========\033[39m\n");
	return 0;
}
