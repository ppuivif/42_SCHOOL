
char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;
	char strcat[];

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		strcat[i] = dest[i];
		i++;
	}
	while (src[j] != '\0')
	{
		strcat[i+j+1] = src[j];
		j++;
	}
	return (strcat[]);
}

#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("%s" "%s", argv[1], argv[2]);
		printf("%s", ft_strcat(argv[1], argv[2]));
	}
	return (0);
}
