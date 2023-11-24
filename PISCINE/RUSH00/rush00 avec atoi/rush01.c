/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megadiou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 14:32:40 by megadiou          #+#    #+#             */
/*   Updated: 2023/08/20 15:00:55 by megadiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

extern void	rush01(int x, int y);
void		ft_putchar(char c);

void	ft_while_inter_rush01(int a, int b, int x, int y)
{
	while (b < y)
	{
		ft_putchar('*');
		while (a < x)
		{
			ft_putchar(' ');
			a++;
		}
		if (x > 1)
			ft_putchar('*');
		ft_putchar('\n');
		a = 2;
		b++;
	}
}

void	ft_write_first_last_rush01(int a, int x)
{
	while (a < x)
	{
		ft_putchar('*');
		a++;
	}
}

void	rush01(int x, int y)
{
	int	a;
	int	b;

	a = 2;
	b = 2;
	if (x >= 1 && y >= 1)
	{
		ft_putchar('/');
		ft_write_first_last_rush01(a, x);
		if (x > 1)
			ft_putchar('\\');
		ft_putchar('\n');
		a = 2;
		ft_while_inter_rush01(a, b, x, y);
		if (y > 1)
		{
			if (x >= 1)
				ft_putchar('\\');
			ft_write_first_last_rush01(a, x);
			if (x > 1)
				ft_putchar('/');
			ft_putchar('\n');
		}
	}
}
