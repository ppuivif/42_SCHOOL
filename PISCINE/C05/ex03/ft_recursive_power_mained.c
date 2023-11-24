/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power_mained.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppuivif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 22:19:06 by ppuivif           #+#    #+#             */
/*   Updated: 2023/09/03 15:06:25 by ppuivif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power == 1)
		return (nb); 
	else
		return(nb * ft_recursive_power(nb, (power - 1)));	
}


#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("%d", ft_recursive_power(atoi(argv[1]), atoi(argv[2])));
	}
	return (0);
}
