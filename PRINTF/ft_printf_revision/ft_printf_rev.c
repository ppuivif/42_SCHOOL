/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_rev.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppuivif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 08:35:27 by ppuivif           #+#    #+#             */
/*   Updated: 2023/12/13 11:18:56 by ppuivif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *str)
{
	int	len;

	len = 0;
	if (!str)
	{
		write (1, "(NULL)", 6);
		return (6);
	}
	while (str[len])
		len += ft_putchar(str[len]);
	return (len);
}

int	ft_putnbr(int nbr)
{
	int	len;
	int	sign;

	len = 0;
	sign = 0;
	if (nbr == INT_MIN)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	if (nbr < 0)
	{
		sign = 1;
		write (1, "-", 1);
		nbr *= -1;
	}
	if( nbr > 9)	
		len = ft_putnbr(nbr / 10);
	len += ft_putchar(nbr % 10 + '0');
	return (len + sign);
}

int	ft_pointer(unsigned long n)
{
	int	len;
	char	*tab;

	len = 0;
	tab = "0123456789abcdef";
	if (!n)
	{
		write (1, "(nil)", 5);
		return (5);
	}
	if (n >= 16)
		len = ft_pointer(n / 16);
	if (len == 0)
		len = write (1, "0x", 2);
	len += ft_putchar(tab[n % 16]);
	return (len);
}

int	ft_hexa_lower(unsigned int n)
{
	int	len;
	char	*tab;

	len = 0;
	tab = "0123456789abcdef";
	if (!n)
	{
		write (1, "(nil)", 5);
		return (5);
	}
	if (n >= 16)
		len += ft_hexa_lower(n / 16);
	len += ft_putchar(tab[n % 16]);
	return (len);
}




static int	ft_format(va_list list, char c)
{
	int	len;

	len = 0; 
	if (c == 'c')
		len = ft_putchar(va_arg(list, int));
	else if (c == 's')
		len = ft_putstr(va_arg(list, char *));
	else if (c == 'd' || c == 'i')
		len = ft_putnbr(va_arg(list, int));
	else if (c == 'p')
		len = ft_pointer(va_arg(list, unsigned long));
	else if (c == 'x')
		len = ft_hexa_lower(va_arg(list, unsigned int));
	return (len);		
}


int	ft_printf(char	*str, ...)
{
	va_list list;
	int	i;
	int	len;

	va_start(list, str);
	i = 0;
	len = 0;
	if (!str)
		return (-1);
	while (str[i])
	{
		if (str[i] == '%')
		{
			len += ft_format(list, str[i+1]);
			i++;
		}
		else
			len += ft_putchar(str[i]);
		i++;
	}
	va_end(list);
	return (len);
}

#include <stdio.h>

int	main(void)
{
	int	str;

	str = 1253;
	ft_printf("ft : %d\n", ft_printf("ft : %x", str));
	printf("re : %d\n", printf("re : %x", str));
	return (0);
}
