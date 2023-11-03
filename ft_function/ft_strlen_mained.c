/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppuivif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 11:40:26 by ppuivif           #+#    #+#             */
/*   Updated: 2023/11/02 12:09:01 by ppuivif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}


#include <stdio.h>
#include <string.h>

int	main(int argc, char **argv)
{
	if (argc > 0)
	{
		printf("%ld\n", strlen(argv[1]));
		printf("%d\n", ft_strlen(argv[1]));
	}
	return (0);
}
