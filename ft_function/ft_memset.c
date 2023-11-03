/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppuivif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 12:14:09 by ppuivif           #+#    #+#             */
/*   Updated: 2023/11/03 09:35:37 by ppuivif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*e;

	e = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		e[i] = c;
		i++;
	}
	return (0);
}
