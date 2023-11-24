/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppuivif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 17:13:52 by ppuivif           #+#    #+#             */
/*   Updated: 2023/08/31 17:26:35 by ppuivif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_comb2(void)
{
	char d1;
	char u1;
	char d2;
	char u2;

	d1 = '0';
	u1 = '0';
	d2 = '0';
	u2 = '1';
	while (d1 <= '9')
	{
		while (u1 <= '8')
		{	
			while (d2 <= '9')
			{
				while (u2 <= '9')
				{
					write (1, &d1, 1);
					write (1, &u1, 1);
					write (1, " ", 1);
					write (1, &d2, 1);
					write (1, &u2, 1);
					write (1, ", ", 2);
					u2++;
				}
				d2++;
				u2 = u1 + 1;
			}
			u1++;
			d2 = u1 + 1;
		}
		d1++;
		u1 = d1 + 1;

	}
	write (1, "98 99", 5);
}

int main(void)
{
	ft_print_comb2();
	return (0);
}
