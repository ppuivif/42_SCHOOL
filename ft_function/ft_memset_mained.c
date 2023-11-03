/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppuivif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 12:14:09 by ppuivif           #+#    #+#             */
/*   Updated: 2023/11/03 10:48:42 by ppuivif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*e;
	size_t	i;
	
	e = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		e[i] = c;
		i++;
	}
	return (0);
}



#include <stdio.h>
#include <string.h>

int	main(int argc, char **argv)
{
	if (argc > 0)
	{
		int n = 4;
		int c = 'b';
		int d = 'c';
		memset(argv[1], c, n);
		printf("%s\n", argv[1]);
		ft_memset(argv[1], d, n);
		printf("%s\n", argv[1]);
	}
	return (0);	
}

//unsigned char *d;

//d = (unsigned char *) test;
