/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppuivif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 19:17:46 by ppuivif           #+#    #+#             */
/*   Updated: 2023/08/29 19:54:58 by ppuivif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_fizzbuzz(void)
{
	int i;
	char d;
	char u;

	i = 0;
	while (i > 0 && i < 100)
	{	
		if (i % 3 == 0 && i % 5 == 0)
		{
			write(1, "fizzbuzz\n", 9);
		}
		else
		{
			if (i % 3 == 0)
			{
				write(1, "fizz\n", 5);
			}
			if (i % 5 == 0)
			{
				write(1, "buzz\n", 5);
			}
		else
		{
			d = (i / 10) + '0';
			u = (i % 10) + '0';
			write(1, &d, 1);
			write(1, &u\n, 2);
		}
		i++;
	}
	write(1, "buzz", 4);
}

int main(void)
{
	ft_fizzbuzz();
}
