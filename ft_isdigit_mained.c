/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit_mained.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppuivif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 09:28:40 by ppuivif           #+#    #+#             */
/*   Updated: 2023/11/03 16:06:24 by ppuivif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	unsigned char	d;

	d = (unsigned char) c;
	if ((d >= '0') & (d <= '9'))
		return (1);
	return (0);
}

#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	unsigned char	c = 'd';
	printf("%d\n", ft_isdigit(c));
	printf("%d\n", isdigit(c));
	return (0);
}
