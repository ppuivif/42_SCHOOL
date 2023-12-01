#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_test(char *s, ...)
{
	va_list d;
	char *str;
	
	int i = 0;
	va_start(d, s);
	int j = va_arg(d, int);
	str = (char *)malloc((strlen(s)+1) * sizeof (char));
	while (s[j] != '\0')
	{
		str[i] = s[j];
		i++;
	}
	va_end(d);
	str[i] = '\0';
	return (str);
}

int	main()
	{
	printf("%s", ft_test("test", 0, 1, 2, 3));
	return (0);
	}
