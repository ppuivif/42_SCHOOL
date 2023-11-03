/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppuivif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 10:41:23 by ppuivif           #+#    #+#             */
/*   Updated: 2023/11/02 11:38:09 by ppuivif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(unsigned char c)
{
	if ((c >= 32) & (c <= 126))
		return (1);
	return (0);
}



#include <stdio.h>
#include <ctype.h>

int main(void)
{
	unsigned char c = 127; 
	printf("%d\n", isprint(c));
	printf("%d\n", ft_isprint(c));
	return (0);
}
