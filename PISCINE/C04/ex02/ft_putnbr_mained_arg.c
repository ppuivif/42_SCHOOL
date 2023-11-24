/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppuivif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 16:32:30 by ppuivif           #+#    #+#             */
/*   Updated: 2023/09/02 19:27:09 by ppuivif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_putchar(int nb)
{
	char tmp;
	tmp = nb + '0';
	write(1, &tmp, 1);
}

void ft_putnbr(int nb)
{
	int i;

	i = 1;
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	if (nb < 0)
	{
		write(1, "-", 1);
		i *= -1;
	}		
	if (nb <= 9)
	{
		ft_putchar(nb);
	}
	if (nb > 9)
	{
		ft_putnbr(nb /10);
		nb %= 10;
		ft_putchar(nb);
	}
}


#include <stdlib.h>
int main(int argc, char **argv)
{
	if (argc == 2)
	{
	ft_putnbr(atoi(argv[1]));
	}
	return (0);
}
