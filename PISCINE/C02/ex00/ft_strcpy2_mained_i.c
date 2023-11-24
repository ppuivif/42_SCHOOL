/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppuivif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 10:57:31 by ppuivif           #+#    #+#             */
/*   Updated: 2023/09/01 11:10:03 by ppuivif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strcpy(char *dest, char *src)
{
	*dest = *src;
		return (dest);
}

#include <stdlib.h>
#include <stdio.h>
#include <string.h>	
int main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("%s\n", ft_strcpy(argv[1], argv[2]));
		printf("%s", strcpy(argv[1], argv[2]));
	}
	return (0);
}
