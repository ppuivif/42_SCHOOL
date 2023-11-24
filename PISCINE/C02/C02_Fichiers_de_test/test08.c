extern char *ft_strlowcase(char *);

#include <stdio.h>
#include <string.h>

int main() {

	// test 01
	printf("\033[96m====== TEST ft_strlowcase(01) ======\033[39m\n");
	{
		char c[] = "PATATE";
		ft_strlowcase(c);
		printf("\033[36mvaleurs attendue :\033[39m\npatate\n");
		printf("\033[36mvaleurs obtenue  :\033[39m\n%s\n", c);
	}

	// test 02
	printf("\033[96m====== TEST ft_strlowcase(02) ======\033[39m\n");
	{
		char c[] = "abcdefghijkl";
		ft_strlowcase(c);
		printf("\033[36mvaleurs attendue :\033[39m\nabcdefghijkl\n");
		printf("\033[36mvaleurs obtenue  :\033[39m\n%s\n", c);
	}

	// test 03
	printf("\033[96m====== TEST ft_strlowcase(03) ======\033[39m\n");
	{
		char c[] = "Nouveau3\nTEST4";
		ft_strlowcase(c);
		printf("\033[36mvaleurs attendue :\033[39m\nnouveau3\ntest4\n");
		printf("\033[36mvaleurs obtenue  :\033[39m\n%s\n", c);
	}

	// test 04
	printf("\033[96m====== TEST ft_strlowcase(04) ======\033[39m\n");
	{
		char c[] = "";
		ft_strlowcase(c);
		printf("\033[36mvaleurs attendue :\033[39m\n\n");
		printf("\033[36mvaleurs obtenue  :\033[39m\n%s\n", c);
	}

	// test 05
	printf("\033[96m====== TEST ft_strlowcase(05) ======\033[39m\n");
	{
		char c[] = "0123$$BoNjOuR";
		ft_strlowcase(c);
		printf("\033[36mvaleurs attendue :\033[39m\n0123$$bonjour\n");
		printf("\033[36mvaleurs obtenue  :\033[39m\n%s\n", c);
	}

	// test 05
	printf("\033[96m====== TEST ft_strupcase(05) ======\033[39m\n");
	{
		char c[20] = "0123$$BoNjOuR";
		strcat(ft_strlowcase(c), "APPEND");
		printf("\033[36mvaleurs attendue :\033[39m\n0123$$bonjourAPPEND\n");
		printf("\033[36mvaleurs obtenue  :\033[39m\n%s\n", c);
	}

	// end for tests
	printf("\033[96m========= FIN DES TESTS =========\033[39m\n");
	return 0;
}
