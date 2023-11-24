/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppuivif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 16:07:17 by ppuivif           #+#    #+#             */
/*   Updated: 2023/09/04 17:53:01 by ppuivif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *src)
{
	int i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}



char	*ft_strdup(char *src)
{
	int i;
	int k;
	char *dest;

	i = 0;
	k = ft_strlen(src);
	dest =(char*)malloc((k+1)*sizeof(char));
	if (dest == NULL)
		return NULL;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i+1] = '\0';
	return (tab);
}

int	main(void)
{
	char *dest = ft_strdup("test");
	printf("%s", dest);
	free(dest);
	return (0);
}
