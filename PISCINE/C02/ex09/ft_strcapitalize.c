/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppuivif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 18:50:36 by ppuivif           #+#    #+#             */
/*   Updated: 2023/09/02 15:49:51 by ppuivif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if((i == 0) || (str[i - 1] == ' ')
				 || (str[i - 1] == '+') || (str[i - 1] == '-'))
				str[i] = str[i] - 32;
		}
		else
			str[i] = str[i];
		i++;
	}	
	return (str);
}

#include <stdlib.h>
#include <stdio.h>
//int	main (int argc, char **argv)
int main(void)
{
	//if(argc == 2)
	//{
		char *argv = "defv ewf";
		char *tab = ft_strcapitalize(argv);
		printf("avant : %s\n", argv);
		printf("apres : %s", tab);
	//}
	return (0);
}
