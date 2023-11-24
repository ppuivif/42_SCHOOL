/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci_mained.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppuivif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 11:16:08 by ppuivif           #+#    #+#             */
/*   Updated: 2023/09/04 15:16:41 by ppuivif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return(-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	else
		return(ft_fibonacci(index - 1) + ft_fibonacci(index -2));
	return (0);
}

#include <stdio.h>
#include <stdlib.h>
int main (int argc, char **argv)
{
	if (argc == 2)
	{
		printf("%d", ft_fibonacci(atoi(argv[1])));
	}
	return (0);
}
