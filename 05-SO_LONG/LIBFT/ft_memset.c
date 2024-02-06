/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppuivif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 12:14:09 by ppuivif           #+#    #+#             */
/*   Updated: 2023/11/24 12:40:01 by ppuivif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*e;
	size_t			i;

	e = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		e[i] = c;
		i++;
	}
	return (s);
}
