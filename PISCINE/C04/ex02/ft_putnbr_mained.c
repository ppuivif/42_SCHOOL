/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_mained.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppuivif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 09:22:12 by ppuivif           #+#    #+#             */
/*   Updated: 2023/09/02 17:30:20 by ppuivif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int nb)
{
	char	num;

	num = nb + '0';
	write(1, &num, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		write (1, "-2147483648", 11);
	else
	{
		if (nb < 0)
		{
			nb *= -1;
			write(1, "-", 1);
		}
		if (nb > 9)
		{
			ft_putnbr(nb / 10);
		}
		nb %= 10;
		ft_putchar(nb);
	}
}

#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char **argv)
{
	//int nb = 4;
	if (argc == 2)
	{
		printf("%s", ft_putnbr(atoi(argv[1])));
	}
	//ft_putnbr(nb);
	return (0);	
}
