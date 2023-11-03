/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppuivif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 11:17:12 by ppuivif           #+#    #+#             */
/*   Updated: 2023/11/03 14:16:39 by ppuivif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*desti;
	unsigned char	*srci;
	unsigned char	tmp[n];
	size_t		i;

	desti = (unsigned char *) dest;
	srci = (unsigned char *) src;
	
	i = 0;
	while ((i < n) & (srci[i] != '\0'))
	{
		tmp[i] = srci[i];
		desti[i] = tmp[i];
		i++;
	}
	return (desti);
}

#include <string.h>
#include <stdio.h>

int	main (int argc, char **argv)
{
	if (argc > 0)
	{
		int n = 2;
//		memmove(argv[1], argv[2], n);
//		printf("base %s\n", argv[1]);
		ft_memmove(argv[1], argv[2], n);
		printf("ft_%s\n", argv[1]);
		printf("%p\n", ft_memmove);
	}
	return (0);
}
