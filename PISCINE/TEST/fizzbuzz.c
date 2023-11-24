/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppuivif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 22:26:03 by ppuivif           #+#    #+#             */
/*   Updated: 2023/08/27 17:54:37 by ppuivif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int	ft_test(void)
{
	int i = 1;
	int d;
	int u;
	char di;
	char un;
	
	while(i < 100)
	{
		if(i % 4 == 0 && i % 7 == 0)
			write(1, "fizzbuzz\n", 9);
		else
			if(i % 4 == 0)
				write(1, "fizz\n", 5);
		else
			if(i % 7 == 0)
				write(1, "buzz\n", 5);
		else
		{
			d = i / 10;
			u = i % 10;
			di = d + '0';
			un = u + '0';
			write(1, &di, 1);
			write(1, &un, 1);
			write(1, "\n", 1);
		}
		i++;
	}
	write(1, "fizz", 4);
}	

int	main(void)
{
	ft_test();
	return (0);
}
