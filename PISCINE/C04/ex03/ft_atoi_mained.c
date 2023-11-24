/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_mained.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppuivif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 10:56:11 by ppuivif           #+#    #+#             */
/*   Updated: 2023/08/30 19:25:37 by ppuivif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	j;
	int	nb;	

	i = 0;
	j = 1;
	nb = 0;
	while (str[i] && (str[i] == ' ' || str[i] == '\f' || str[i] == '\n'
			|| str[i] == '\r' || str[i] == '\t' || str[i] == '\v'))
		i++;
	while (str[i] && ((str[i] == '+') || (str[i] == '-')))
	{
		if (str[i] == '-')
			j = j * -1;
	i++;
	}	
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		nb = (nb * 10) + (str[i] - 48);
		i++;
	}
	return (nb * j);
}


#include <ctype.h>
#include <stdio.h>
int	main(void)
{
	char str[] = "   ---+--+1234ab567";
	printf("%d", ft_atoi(str));
	return (0);
}
