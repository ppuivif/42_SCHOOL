/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppuivif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 18:17:36 by ppuivif           #+#    #+#             */
/*   Updated: 2023/08/23 18:02:03 by ppuivif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while ((i < n))
	{	:w
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

#include <stdio.h>


int main(void)

{	
	char src[] = "swagg";
	char dest[] = {};
	unsigned int n = 6;
//	printf("src avant %s\n", ft_strncpy(dest,src,n));
	printf("src avant : %s\n", src);
	printf("src avant : %s\n", dest);
	ft_strncpy(dest, src, n);
	printf("src apres : %s\n", src);
	printf("src apres : %s\n", dest);
	return(0);
}
