extern int ft_str_is_alpha(char *);

#include <stdio.h>

int main() {
	int a;

	// test 01
	printf("\033[96m====== TEST ft_str_is_alpha(01) ======\033[39m\n");
	{
		char c[] = "azetyuytYUTEhGEUYGEfhgfuyGYYEFDH";
		a = ft_str_is_alpha(c);
		printf("\033[36mvaleurs attendue :\033[39m\n1\n");
		printf("\033[36mvaleurs obtenue  :\033[39m\n%d\n", a);
	}

	// test 02
	printf("\033[96m====== TEST ft_str_is_alpha(02) ======\033[39m\n");
	{
		char c[] = "azetyuy546tYUTEhGEUYGEfhgfuyGYYEFDH";
		a = ft_str_is_alpha(c);
		printf("\033[36mvaleurs attendue :\033[39m\n0\n");
		printf("\033[36mvaleurs obtenue  :\033[39m\n%d\n", a);
	}

	// test 03
	printf("\033[96m====== TEST ft_str_is_alpha(03) ======\033[39m\n");
	{
		char c[] = "azetyuy tYUTEhGEUYGEfhgfuyGYYEFDH";
		a = ft_str_is_alpha(c);
		printf("\033[36mvaleurs attendue :\033[39m\n0\n");
		printf("\033[36mvaleurs obtenue  :\033[39m\n%d\n", a);
	}

	// test 04
	printf("\033[96m====== TEST ft_str_is_alpha(04) ======\033[39m\n");
	{
		char c[] = "";
		a = ft_str_is_alpha(c);
		printf("\033[36mvaleurs attendue :\033[39m\n1\n");
		printf("\033[36mvaleurs obtenue  :\033[39m\n%d\n", a);
	}

	// test 03
	printf("\033[96m====== TEST ft_str_is_alpha(05) ======\033[39m\n");
	{
		char c[] = "azetyuy%tYUTEhGEUYGEfhgfuyGYYEFDH";
		a = ft_str_is_alpha(c);
		printf("\033[36mvaleurs attendue :\033[39m\n0\n");
		printf("\033[36mvaleurs obtenue  :\033[39m\n%d\n", a);
	}

	// end for tests
	printf("\033[96m========= FIN DES TESTS =========\033[39m\n");
	return 0;
}
