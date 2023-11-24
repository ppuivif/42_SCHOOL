/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppuivif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 19:06:45 by ppuivif           #+#    #+#             */
/*   Updated: 2023/08/23 18:04:22 by ppuivif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*lire et copier le 1er caractere de la premiere case du tableau source
 * coller le caractere dans la premiere case du tableau destination
 * repeter l'operation avec le 2eme caractere de la deuxieme case
 * et ainsi de suite autant de fois que de caracteres y compris le back slash zero*/

#include <stdio.h>
int main(void)
{
	char src[6] = "salut";
	char dest[6] = "tulas";
	printf("src avant : %s\n", src);
	printf("dest avant : %s\n", dest);
	ft_strcpy(dest, src);
	printf("src apres : %s\n", src);
	printf("dest apres : %s\n", dest);
	return (0);
}	

