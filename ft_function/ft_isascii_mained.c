/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppuivif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 10:24:41 by ppuivif           #+#    #+#             */
/*   Updated: 2023/11/02 10:40:04 by ppuivif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(unsigned char c)
{
	if (c <= 127)
		return (1);
	return (0);
}


#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	unsigned char c = 127;
	printf("%d\n", isascii(c));
	printf("%d\n", ft_isascii(c));
	return (0);
}
