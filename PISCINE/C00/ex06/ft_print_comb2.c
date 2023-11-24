/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppuivif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 20:20:34 by ppuivif           #+#    #+#             */
/*   Updated: 2023/08/21 16:56:10 by ppuivif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	int a;
	int b;
	char c;
	char d;
	char e;
	char f;
	a = 0;
		while(a < 98)
	{
			c = a /10 +'0';
			d = a %10 +'0';
			e = b /10 +'0';
			f = b %10 +'0';
			while(b < 99)
		{		
				write(1, &c, 1);
				write(1, &d, 1);
				write(1, " ", 1);
				write(1, &e, 1);
				write(1, &f, 1);
				write(1, ", ", 2);
				b++;
		}

			a++;
	}		
}
		
int	main(void)
{
	ft_print_comb2();
	return (0);
}
