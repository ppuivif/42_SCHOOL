/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppuivif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:31:41 by ppuivif           #+#    #+#             */
/*   Updated: 2023/11/03 11:31:14 by ppuivif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*desti;
	unsigned char	*srci;
	size_t			i;

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
