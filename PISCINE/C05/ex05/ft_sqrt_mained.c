/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppuivif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 15:15:34 by ppuivif           #+#    #+#             */
/*   Updated: 2023/09/04 15:20:29 by ppuivif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int num;

	num = 1;
	while (num <= (nb / num))
	{
		if ((nb == num * num) && (nb % num == 0))
			return (num);
		num++;
	}
	return (0);
}

#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("%d", ft_sqrt(atoi(argv[1])));
	}
	return (0);
}
