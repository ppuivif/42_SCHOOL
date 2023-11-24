/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power_mained.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppuivif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 21:47:26 by ppuivif           #+#    #+#             */
/*   Updated: 2023/09/02 22:17:56 by ppuivif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_power(int nb, int power)
{
	int num;
	int i;

	i = 1;
	num = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (i <= power)
	{
		num = num * nb;
		i++;	
	}
	return(num);	
}

#include <stdlib.h>
#include <stdio.h>
int main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("%d", ft_iterative_power(atoi(argv[1]), atoi(argv[2])));
	}
	return (0);
}
