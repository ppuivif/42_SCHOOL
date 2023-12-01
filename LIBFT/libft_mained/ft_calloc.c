/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppuivif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 17:18:34 by ppuivif           #+#    #+#             */
/*   Updated: 2023/11/15 10:05:57 by ppuivif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*str;
	size_t	i;
	size_t	j;

	i = 0;
	j = nmemb * size;
	if (!size || !nmemb)
		return (malloc(1));
	if (nmemb * size / size != nmemb)
//	if ((long) nmemb <= 0 || (long) size <= 0 || nmemb * size < __SIZE_MAX__)
//		return (NULL);
	str = (char *)malloc(j);
	if (str)
	{
		while (i < j)
		{
			str[i] = '\0';
			i++;
		}
		return ((void *) str);
	}
	return (NULL);
}
