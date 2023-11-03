/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy_mained.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppuivif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:31:41 by ppuivif           #+#    #+#             */
/*   Updated: 2023/11/03 12:20:22 by ppuivif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

#include <stdio.h>
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*desti;
	unsigned char	*srci;
	size_t		 i;

	desti = (unsigned char *) dest;
	srci = (unsigned char *) src;
	i = 0;
	while ((i < n) & (srci[i] != '\0'))
	{
		desti[i] = srci[i];
		i++;
	}
	return (desti);
}




#include <stdio.h>
#include <string.h>

int	main (int argc, char **argv)
{
	if (argc > 0)
	{
		int n = 2;
		memcpy(argv[1], argv[2], n);
//		ft_memcpy(argv[1], argv[2], n);
		printf("%s\n", argv[1]);
	}
	return (0);
}
