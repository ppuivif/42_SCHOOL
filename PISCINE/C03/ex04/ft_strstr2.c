
#include <stdio.h>
char *ft_strstr(char *str, char *to_find)
{
	int	i;
	char tmp[10];
	int j;
	int k;

	i = 0;
	j = 0;
	k = 0;
	while (str[i] != '\0')
	{
		if (to_find[j] == str[i])
		{
			tmp[k] = str[i];
			j++;
			k++;
			i++;
		}
		else
		{
			i++;
			j = 0;
			k = 0;
		}
		printf("%s", tmp);
		return (str);
	}
	return(0);
}



#include <string.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("fonction strstr ;  %s\n", strstr(argv[1], argv[2]));
		printf("fonction_strstr ;  %s\n", ft_strstr(argv[1], argv[2]));
	}
	return (0);
}

