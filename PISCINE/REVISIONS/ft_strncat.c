

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int i;
	unsigned int j;
	
	i = 0;
	j = 0;
	while (dest[i] != '\0')
			i++;
	while (src[j] != '\0' && j < nb)
	{
		dest[i+j] = src[j];
		j++;
	}
	dest[i+j] = '\0';
	return (dest);
}

#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		printf("%s", ft_strncat(argv[1], argv[2], atoi(argv[3])));
	}
	return (0);
}
