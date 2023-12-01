/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   added_functions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppuivif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 18:29:45 by ppuivif           #+#    #+#             */
/*   Updated: 2023/12/01 14:58:58 by ppuivif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return(1);
}

int	ft_putstr(char *s)
{
	int	i;

	i = 0;
	while(s[i])
		i += ft_putchar(s[i]); 
	return(i);
}

int	ft_putnbr(int nb)
{
	int	i;

	i = 0;
	if (nb == -2147283648)
	{
		write(1, "-2147283648", 11);
		return(11);
	}
/*cas particulier du moins non geree
	if (nb < 0)
	{
		nb *= -1;
		write(1, "-", 1);
		i++;
	}*/
	if (nb > 0)	
	{
		i = ft_putnbr(nb / 10);
		i += ft_putchar((nb % 10) + '0');
		//nb %= 10;
		//nb = nb + '0';
		//ft_putchar(nb);
	}
	return(i);
}

int	ft_hexa_lower(unsigned int n)
{
	char *tab;
	int	i;

	tab = "0123456789abcdef";
	i = 0;
	if (n >= 16)
		i = ft_hexa_lower(n / 16);
	i += 1;
	write(1, &tab[n % 16], 1);
	return(i);
}

int	ft_hexa_upper(unsigned int n)
{
	char	*tab;
	int	i;
	
	tab = "0123456789ABCDEF";
	i = 0;
	if (n >= 16)
		i = ft_hexa_upper(n / 16);
	i += 1;
	write(1, &tab[n % 16], 1);
	return(i);
}
