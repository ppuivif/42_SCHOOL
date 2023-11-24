extern char *ft_strcapitalize(char *);

#include <stdio.h>
#include <string.h>

int main() {

	// test 01
	printf("\033[96m====== TEST ft_strcapitalize(01) ======\033[39m\n");
	{
		char c[] = "patate";
		ft_strcapitalize(c);
		printf("\033[36mvaleurs attendue :\033[39m\nPatate\n");
		printf("\033[36mvaleurs obtenue  :\033[39m\n%s\n", c);
	}

	// test 02
	printf("\033[96m====== TEST ft_strcapitalize(02) ======\033[39m\n");
	{
		char c[] = "ABCDEFGHIJKL";
		ft_strcapitalize(c);
		printf("\033[36mvaleurs attendue :\033[39m\nAbcdefghijkl\n");
		printf("\033[36mvaleurs obtenue  :\033[39m\n%s\n", c);
	}

	// test 03
	printf("\033[96m====== TEST ft_strcapitalize(03) ======\033[39m\n");
	{
		char c[] = "nouVeau3\n4test";
		ft_strcapitalize(c);
		printf("\033[36mvaleurs attendue :\033[39m\nNouveau3\n4test\n");
		printf("\033[36mvaleurs obtenue  :\033[39m\n%s\n", c);
	}
	// test 04
	printf("\033[96m====== TEST ft_strcapitalize(04) ======\033[39m\n");
	{
		char c[] = "nouVeau3\ntest";
		ft_strcapitalize(c);
		printf("\033[36mvaleurs attendue :\033[39m\nNouveau3\nTest\n");
		printf("\033[36mvaleurs obtenue  :\033[39m\n%s\n", c);
	}
	// test 05
	printf("\033[96m====== TEST ft_strcapitalize(05) ======\033[39m\n");
	{
		char c[] = "";
		ft_strcapitalize(c);
		printf("\033[36mvaleurs attendue :\033[39m\n\n");
		printf("\033[36mvaleurs obtenue  :\033[39m\n%s\n", c);
	}

	// test 06
	printf("\033[96m====== TEST ft_strcapitalize(06) ======\033[39m\n");
	{
		char c[] = "0123$$bonjour";
		ft_strcapitalize(c);
		printf("\033[36mvaleurs attendue :\033[39m\n0123$$Bonjour\n");
		printf("\033[36mvaleurs obtenue  :\033[39m\n%s\n", c);
	}

	// test 07
	printf("\033[96m====== TEST ft_strcapitalize(07) ======\033[39m\n");
	{
		char c[20] = "0123$$bonjour";
		strcat(ft_strcapitalize(c), "aPPEND");
		printf("\033[36mvaleurs attendue :\033[39m\n0123$$BonjouraPPEND\n");
		printf("\033[36mvaleurs obtenue  :\033[39m\n%s\n", c);
	}
	// test 08
	printf("\033[96m====== TEST ft_strcapitalize(08) ======\033[39m\n");
	{
		char c[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
		ft_strcapitalize(c);
		printf("\033[36mvaleurs attendue :\033[39m\nSalut, Comment Tu Vas ? 42mots Quarante-Deux; Cinquante+Et+Un\n");
		printf("\033[36mvaleurs obtenue  :\033[39m\n%s\n", c);
	}
	// end for tests
	printf("\033[96m========= FIN DES TESTS =========\033[39m\n");
	return 0;
}
