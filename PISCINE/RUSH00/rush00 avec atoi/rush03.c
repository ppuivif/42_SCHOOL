/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megadiou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 14:53:25 by megadiou          #+#    #+#             */
/*   Updated: 2023/08/20 15:46:22 by megadiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

extern void	rush03(int x, int y);
void		ft_putchar(char c);

void	ft_while_inter_rush03(int a, int b, int x, int y)
{
	while (b < y)
	{
		ft_putchar('B');
		while (a < x)
		{
			ft_putchar(' ');
			a++;
		}
		if (x > 1)
			ft_putchar('B');
		ft_putchar('\n');
		a = 2;
		b++;
	}
}

void	ft_write_first_last_rush03(int a, int x)
{
	while (a < x)
	{
		ft_putchar('B');
		a++;
	}
}

void	rush03(int x, int y)
{
	int	a;
	int	b;

	a = 2;
	b = 2;
	if (x >= 1 && y >= 1)
	{
		ft_putchar('A');
		ft_write_first_last_rush03(a, x);
		if (x > 1)
			ft_putchar('C');
		ft_putchar('\n');
		a = 2;
		ft_while_inter_rush03(a, b, x, y);
		if (y > 1)
		{
			if (x >= 1)
				ft_putchar('A');
			ft_write_first_last_rush03(a, x);
			if (x > 1)
				ft_putchar('C');
			ft_putchar('\n');
		}
	}
}
