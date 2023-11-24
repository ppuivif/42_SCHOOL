/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppuivif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 11:15:08 by ppuivif           #+#    #+#             */
/*   Updated: 2023/08/20 17:07:29 by megadiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

extern void	rush00(int x, int y);
void		ft_putchar(char c);

void	ft_while_inter(int a, int b, int x, int y)
{
	while (b < y)
	{
		ft_putchar('|');
		while (a < x)
		{
			ft_putchar(' ');
			a++;
		}
		if (x > 1)
			ft_putchar('|');
		ft_putchar('\n');
		a = 2;
		b++;
	}
}

void	ft_write_first_last(int a, int x)
{
	while (a < x)
	{
		ft_putchar('-');
		a++;
	}
}

void	rush00(int x, int y)
{
	int	a;
	int	b;

	a = 2;
	b = 2;
	if (x >= 1 && y >= 1)
	{
		ft_putchar('o');
		ft_write_first_last(a, x);
		if (x > 1)
			ft_putchar('o');
		ft_putchar('\n');
		a = 2;
		ft_while_inter(a, b, x, y);
		if (y > 1)
		{
			if (x > 1)
				ft_putchar('o');
			ft_write_first_last(a, x);
			ft_putchar('o');
			ft_putchar('\n');
		}
	}
	else
		write(1, "Invalid Numbers, put a number higher than 0", 43);
}
