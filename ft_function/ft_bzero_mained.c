/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppuivif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:55:23 by ppuivif           #+#    #+#             */
/*   Updated: 2023/11/02 17:29:00 by ppuivif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	size_t i;
	unsigned char	*e;

	i = 0;
	e = (unsigned char *) s;
	while (i < n)
	{
		e[i] = '\0';
		i++;
	}
}



#include <stdio.h>
#include <string.h>

int main (int argc, char **argv)
{
	if (argc > 1)
	{
		int n = 4;
		ft_bzero(argv[1], n);
		printf("%s\n", argv[1]);
	}
	return (0);
}
