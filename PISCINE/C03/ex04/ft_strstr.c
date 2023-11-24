/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppuivif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 22:44:43 by ppuivif           #+#    #+#             */
/*   Updated: 2023/08/28 20:15:51 by ppuivif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;
	while (str[i] != '\0')
		i++;
	return (i);
}

char *ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	int ln_str;
	int ln_to_find;
	char tmp[3];

	i = 0;
	j = 0;
	ln_str = 0;
	ln_to_find = ft_strlen(to_find);
	while (str[i] != '\0')
	{
		if (to_find[j] = str[i])
		{
			tmp[j] = to_find[j];
			j++;
			if (i < ln_to_find)
			{
				while (str[i] != '\0')
				{
					tmp[j] = str[i];
					i++;
				}
			}
		}
		else
			j = 0;
	i++;
	}
	write (1, &tmp, 10);
	return (0);
}

#include <stdio.h>
#include <string.h>
int main(void)
{
	char str[] = "essai";
	char to_find[] = "sa";
	ft_strstr(str, to_find);
	//printf("%s", ft_strstr(str, to_find));
	//printf("%s", strstr(str, to_find));
	return (0);
}

