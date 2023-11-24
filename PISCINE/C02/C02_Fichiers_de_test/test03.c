extern int ft_str_is_numeric(char *);

#include <stdio.h>

int main() {
	int a;

	// test 01
	printf("\033[96m====== TEST ft_str_is_numeric(01) ======\033[39m\n");
	{
		char c[] = "1351020630350363503";
		a = ft_str_is_numeric(c);
		printf("\033[36mvaleurs attendue :\033[39m\n1\n");
		printf("\033[36mvaleurs obtenue  :\033[39m\n%d\n", a);
	}

	// test 02
	printf("\033[96m====== TEST ft_str_is_numeric(02) ======\033[39m\n");
	{
		char c[] = "02035306350350350O351350350";
		a = ft_str_is_numeric(c);
		printf("\033[36mvaleurs attendue :\033[39m\n0\n");
		printf("\033[36mvaleurs obtenue  :\033[39m\n%d\n", a);
	}

	// test 03
	printf("\033[96m====== TEST ft_str_is_numeric(03) ======\033[39m\n");
	{
		char c[] = "02035*/6350350350O351350350";
		a = ft_str_is_numeric(c);
		printf("\033[36mvaleurs attendue :\033[39m\n0\n");
		printf("\033[36mvaleurs obtenue  :\033[39m\n%d\n", a);
	}

	// test 04
	printf("\033[96m====== TEST ft_str_is_numeric(04) ======\033[39m\n");
	{
		char c[] = "";
		a = ft_str_is_numeric(c);
		printf("\033[36mvaleurs attendue :\033[39m\n1\n");
		printf("\033[36mvaleurs obtenue  :\033[39m\n%d\n", a);
	}

	// test 03
	printf("\033[96m====== TEST ft_str_is_numeric(05) ======\033[39m\n");
	{
		char c[] = "azetyuy%tYUTEhGEUYGEfhgfuyGYYEFDH";
		a = ft_str_is_numeric(c);
		printf("\033[36mvaleurs attendue :\033[39m\n0\n");
		printf("\033[36mvaleurs obtenue  :\033[39m\n%d\n", a);
	}

	// end for tests
	printf("\033[96m========= FIN DES TESTS =========\033[39m\n");
	return 0;
}
