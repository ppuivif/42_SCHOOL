/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_mained.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppuivif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 18:34:28 by ppuivif           #+#    #+#             */
/*   Updated: 2023/08/24 18:48:50 by ppuivif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(int *str)
{
	int	i;

	i = 0;
	while (*str > 9)
	{
		*str = *str / 10;
		i++;
	}
	return (i + 1);
}

#include <stdio.h>
int	main(void)
{
	int str = 123456;
	printf("%d", ft_strlen(&str));
	return (0);
}
