/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppuivif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 18:35:55 by ppuivif           #+#    #+#             */
/*   Updated: 2023/09/03 20:59:57 by ppuivif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */




int ft_find_next_prime(int nb)
{
	int i;
	int j;

	i = 2;
	j = 0;
	while (nb < 2147483647)
	{
		nb = nb + j;
		while (i <= nb / i)
		{
			nb = nb + j;
			if (nb % i == 0)
				i++;
			else
				j++;
		}
		return (0);
}

#include <stdio.h>
#include <stdlib.h>
//int main(int argc, char **argv)
int main(void)
{
	/*if (argc ==2)
	{
		printf("%d", ft_find_next_prime(atoi(argv[1])));
	}*/
		printf("%d", ft_find_next_prime(28));
	return (0);
}
