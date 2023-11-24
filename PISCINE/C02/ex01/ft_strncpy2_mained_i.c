/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy2_mained_i.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppuivif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 10:57:31 by ppuivif           #+#    #+#             */
/*   Updated: 2023/09/01 12:18:29 by ppuivif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

#include <stdlib.h>
#include <stdio.h>
#include <string.h>	
int main(int argc, char **argv)
{
	if (argc == 4)
	{
		printf("%s\n", ft_strncpy(argv[1], argv[2], atoi(argv[3])));
		printf("%s", strncpy(argv[1], argv[2], atoi(argv[3])));
	}
	return (0);
}
