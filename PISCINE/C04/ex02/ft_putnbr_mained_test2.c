/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_mained.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppuivif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 21:12:39 by ppuivif           #+#    #+#             */
/*   Updated: 2023/08/29 15:15:37 by ppuivif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int nb)
{
	nb = nb + '0';
	write (1, &nb, 1);
}

void	ft_put_int(int *nb)
{
	*nb = *nb / 10;
}

void	ft_putnbr(int nb)
{
	char	num;

	if (nb != -2147483648)
	{
		if (nb < 0)
		{
			//while (i < 0);
			//ft_put_int(nb);
			num = nb + '0';
			write(1, "-", 1);
			write(1, &num, 1);
			//i++;
		}
		if (nb >= 0 && nb <= 9)
		{
			num = nb + '0';
			write(1, &num, 1);
			//i++;
		}
		if (nb > 9)
		{
			//while (i < 0);
			ft_put_int(&nb);
			num = nb + '0';
			write(1, &num, 1);
			//i++;
		}
	}
}

void	ft_putnbr_unsigned_req(unsigned int nb)
{
	if (nb > 9)
	{
		ft_putnbr_unsigned_req(nb / 10);
		//writ nb % 10;:
	}
	else
	{
		//write nb
	}
}

int	main(void)
{
	ft_putnbr(560);
	return (0);
}
