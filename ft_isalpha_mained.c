/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha_mained.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppuivif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 12:38:58 by ppuivif           #+#    #+#             */
/*   Updated: 2023/11/03 16:01:21 by ppuivif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	unsigned char	d;

	d = (unsigned char) c;
	if (((d >= 'a') & (d <= 'z')) || ((d >= 'A') & (d <= 'Z')))
		return (1);
	return (0);
}

#include <ctype.h>
#include <unistd.h>
#include <stdio.h>

int	main(void)
{
	unsigned char	c = '8';
	printf("%d\n", ft_isalpha(c));
	printf("%d\n", isalpha(c));
	return (0);
}
