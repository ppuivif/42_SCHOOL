extern char *ft_strupcase(char *);

#include <stdio.h>
#include <string.h>

int main() {

	// test 01
	printf("\033[96m====== TEST ft_strupcase(01) ======\033[39m\n");
	{
		char c[] = "patate";
		ft_strupcase(c);
		printf("\033[36mvaleurs attendue :\033[39m\nPATATE\n");
		printf("\033[36mvaleurs obtenue  :\033[39m\n%s\n", c);
	}

	// test 02
	printf("\033[96m====== TEST ft_strupcase(02) ======\033[39m\n");
	{
		char c[] = "ABCDEFGHIJKL";
		ft_strupcase(c);
		printf("\033[36mvaleurs attendue :\033[39m\nABCDEFGHIJKL\n");
		printf("\033[36mvaleurs obtenue  :\033[39m\n%s\n", c);
	}

	// test 03
	printf("\033[96m====== TEST ft_strupcase(03) ======\033[39m\n");
	{
		char c[] = "Nouveau3\ntest4";
		ft_strupcase(c);
		printf("\033[36mvaleurs attendue :\033[39m\nNOUVEAU3\nTEST4\n");
		printf("\033[36mvaleurs obtenue  :\033[39m\n%s\n", c);
	}

	// test 04
	printf("\033[96m====== TEST ft_strupcase(04) ======\033[39m\n");
	{
		char c[] = "";
		ft_strupcase(c);
		printf("\033[36mvaleurs attendue :\033[39m\n\n");
		printf("\033[36mvaleurs obtenue  :\033[39m\n%s\n", c);
	}

	// test 05
	printf("\033[96m====== TEST ft_strupcase(05) ======\033[39m\n");
	{
		char c[] = "0123$$bonjour";
		ft_strupcase(c);
		printf("\033[36mvaleurs attendue :\033[39m\n0123$$BONJOUR\n");
		printf("\033[36mvaleurs obtenue  :\033[39m\n%s\n", c);
	}

	// test 05
	printf("\033[96m====== TEST ft_strupcase(05) ======\033[39m\n");
	{
		char c[20] = "0123$$bonjour";
		strcat(ft_strupcase(c), "append");
		printf("\033[36mvaleurs attendue :\033[39m\n0123$$BONJOURappend\n");
		printf("\033[36mvaleurs obtenue  :\033[39m\n%s\n", c);
	}

	// end for tests
	printf("\033[96m========= FIN DES TESTS =========\033[39m\n");
	return 0;
}
