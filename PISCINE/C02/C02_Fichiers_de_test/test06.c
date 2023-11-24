extern int ft_str_is_printable(char *);

#include <stdio.h>

int main() {
	int a;

	// test 01
	printf("\033[96m====== TEST ft_str_is_printable(01) ======\033[39m\n");
	{
		char c[] = "JKGLHEDFKJUGSHDFDKLJFH";
		a = ft_str_is_printable(c);
		printf("\033[36mvaleurs attendue :\033[39m\n1\n");
		printf("\033[36mvaleurs obtenue  :\033[39m\n%d\n", a);
	}

	// test 02
	printf("\033[96m====== TEST ft_str_is_printable(02) ======\033[39m\n");
	{
		char c[] = "KDJQSFGSJDBFGRGZSR\nSGSDFGDFGHD";
		a = ft_str_is_printable(c);
		printf("\033[36mvaleurs attendue :\033[39m\n0\n");
		printf("\033[36mvaleurs obtenue  :\033[39m\n%d\n", a);
	}

	// test 03
	printf("\033[96m====== TEST ft_str_is_printable(03) ======\033[39m\n");
	{
		char c[] = "KLFGHDFKJGH\aFGELRJGNH";
		a = ft_str_is_printable(c);
		printf("\033[36mvaleurs attendue :\033[39m\n0\n");
		printf("\033[36mvaleurs obtenue  :\033[39m\n%d\n", a);
	}

	// test 04
	printf("\033[96m====== TEST ft_str_is_printable(04) ======\033[39m\n");
	{
		char c[] = "";
		a = ft_str_is_printable(c);
		printf("\033[36mvaleurs attendue :\033[39m\n1\n");
		printf("\033[36mvaleurs obtenue  :\033[39m\n%d\n", a);
	}

	// test 03
	printf("\033[96m====== TEST ft_str_is_printable(05) ======\033[39m\n");
	{
		char c[] = "\n\t\a\v";
		a = ft_str_is_printable(c);
		printf("\033[36mvaleurs attendue :\033[39m\n0\n");
		printf("\033[36mvaleurs obtenue  :\033[39m\n%d\n", a);
	}

	// end for tests
	printf("\033[96m========= FIN DES TESTS =========\033[39m\n");
	return 0;
}
