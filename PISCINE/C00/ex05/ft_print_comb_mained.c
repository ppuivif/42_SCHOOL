/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb_mained.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppuivif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 08:50:25 by ppuivif           #+#    #+#             */
/*   Updated: 2023/08/31 14:15:16 by ppuivif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	while (a < '7')
	{
		b = a +1;
		while (b <= '9')
		{	
			c = b +1;
			while (c <= '9')
			{
				write(1, &a, 1);
				write(1, &b, 1);
				write(1, &c, 1);
				write(1, ", ", 1);
				c++;
			}
			b++;
		}
		a++;
	}
	write(1, "789", 3);
}

int	main(void)
{
	ft_print_comb();
	return(0);
{
