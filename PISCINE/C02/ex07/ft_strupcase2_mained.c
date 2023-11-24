/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppuivif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 14:09:36 by ppuivif           #+#    #+#             */
/*   Updated: 2023/09/02 14:23:41 by ppuivif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strupcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		else
			str[i] = str [i];
		i++;
	}
	return (str);
}

#include <stdio.h>
int main (int argc, char **argv)
{
	if (argc == 2)
	{
		printf("%s", ft_strupcase(argv[1]));
	}
	return (0);
}
