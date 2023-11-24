extern void ft_putstr_non_printable(char *);

#include <stdio.h>
#include <string.h>

int main() {

	// test 01
	printf("\033[96m====== TEST ft_putstr_non_printable(01) ======\033[39m\n");
	{
		char c[] = "Coucou\ntu vas bien ?";
		printf("\033[36mvaleurs attendue :\033[39m\nCoucou\\0atu vas bien ?\n");
		printf("\033[36mvaleurs obtenue  :\033[39m\n");
		ft_putstr_non_printable(c);
	}
	// test 02
	printf("\n\033[96m====== TEST ft_putstr_non_printable(02) ======\033[39m\n");
	{
		char c[] = "Coucou tu vas bien ?";
		printf("\033[36mvaleurs attendue :\033[39m\nCoucou tu vas bien ?\n");
		printf("\033[36mvaleurs obtenue  :\033[39m\n");
		ft_putstr_non_printable(c);
	}
	// test 03
	printf("\n\033[96m====== TEST ft_putstr_non_printable(03) ======\033[39m\n");
	{
		char c[] = "";
		printf("\033[36mvaleurs attendue :\033[39m\n\n");
		printf("\033[36mvaleurs obtenue  :\033[39m\n");
		ft_putstr_non_printable(c);
	}
	// test 04
	printf("\n\033[96m====== TEST ft_putstr_non_printable(04) ======\033[39m\n");
	{
		char c[] = "\n   fgdfgt\nfdcvfd";
		printf("\033[36mvaleurs attendue :\033[39m\n\\0a   fgdfgt\\0afdcvfd\n");
		printf("\033[36mvaleurs obtenue  :\033[39m\n");
		ft_putstr_non_printable(c);
	}
	// end for tests
	printf("\n\033[96m========= FIN DES TESTS =========\033[39m\n");
	return 0;	
}
