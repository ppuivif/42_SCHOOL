extern char *ft_strncpy(char *, char *, int);

#include <stdio.h>

int main() {
	char c[20];

	// test 01
	printf("\033[96m====== TEST ft_strncpy(01) ======\033[39m\n");
	ft_strncpy(c, "test01 OK", 6);
	printf("\033[36mvaleurs attendue :\033[39m\ntest01\n");
	printf("\033[36mvaleurs obtenue  :\033[39m\n%.*s\n", 6, c);

	// test 02
	printf("\033[96m====== TEST ft_strncpy(02) ======\033[39m\n");
	ft_strncpy(c, "01234567890123456789", 10);
	printf("\033[36mvaleurs attendue :\033[39m\n0123456789\n");
	printf("\033[36mvaleurs obtenue  :\033[39m\n%.*s\n", 10, c);

	// test 03
	printf("\033[96m====== TEST ft_strncpy(03) ======\033[39m\n");
	ft_strncpy(c, "fgh132%89N kjb\nJHKD", 8);
	printf("\033[36mvaleurs attendue :\033[39m\nfgh132%%8\n");
	printf("\033[36mvaleurs obtenue  :\033[39m\n%.*s\n", 8, c);

	// test 04
	printf("\033[96m====== TEST ft_strncpy(04) ======\033[39m\n");
	ft_strncpy(c, "", 3);
	printf("\033[36mvaleurs attendue :\033[39m\n\n");
	printf("\033[36mvaleurs obtenue  :\033[39m\n%.*s\n", 3, c);

	// end for tests
	printf("\033[96m========= FIN DES TESTS =========\033[39m\n");
	return 0;
}
