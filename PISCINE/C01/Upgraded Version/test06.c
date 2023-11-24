extern int ft_strlen(char *);

#include <stdio.h>

int main() {
	int len;

	// test 01
	printf("\033[96m====== TEST ft_strlen(01) ======\033[39m\n");
	len = ft_strlen("Hello, world!\n");
	printf("\033[36mvaleurs attendue :\033[39m\n14\n");
	printf("\033[36mvaleurs obtenue  :\033[39m\n%d\n", len);

	// test 02
	printf("\033[96m====== TEST ft_strlen(02) ======\033[39m\n");
	len = ft_strlen("\n\\\"");
	printf("\033[36mvaleurs attendue :\033[39m\n3\n");
	printf("\033[36mvaleurs obtenue  :\033[39m\n%d\n", len);

	// test 03
	printf("\033[96m====== TEST ft_strlen(03) ======\033[39m\n");
	len = ft_strlen("\033[32mHello colors\033[39m\n");
	printf("\033[36mvaleurs attendue :\033[39m\n23\n");
	printf("\033[36mvaleurs obtenue  :\033[39m\n%d\n", len);

	// test 04
	printf("\033[96m====== TEST ft_strlen(04) ======\033[39m\n");
	len = ft_strlen("");
	printf("\033[36mvaleurs attendue :\033[39m\n0\n");
	printf("\033[36mvaleurs obtenue  :\033[39m\n%d\n", len);

	// end for tests
	printf("\033[96m========= FIN DES TESTS =========\033[39m\n");
	return 0;
}
