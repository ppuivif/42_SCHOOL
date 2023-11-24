/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial_mained.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppuivif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 18:41:46 by ppuivif           #+#    #+#             */
/*   Updated: 2023/09/04 14:58:17 by ppuivif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_factorial(int nb)
{
	int n;
	int i;

	i = 1;
	n = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	else
	{
		while (i <= nb)
		{
			n = n * i;
			i++;
		}
		return (n);
	}
}

#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("le nombre est : %s\n", argv[1]);
		printf("le resultat est : %d", ft_iterative_factorial(atoi(argv[1])));
	}
	return (0);
}
