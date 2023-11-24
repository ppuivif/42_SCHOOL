/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat_mained.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppuivif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 17:15:14 by ppuivif           #+#    #+#             */
/*   Updated: 2023/08/24 18:30:03 by ppuivif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < nb)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

#include <string.h>
#include <stdio.h>

int	main(void)
{
	char dest[] = "Hello ";
	char src[] = "world, world world";
	unsigned int nb = 5;	
	//printf("%s", strncat(dest, src, nb));
	printf("%s", ft_strncat(dest, src, nb));
	return (0);
}
