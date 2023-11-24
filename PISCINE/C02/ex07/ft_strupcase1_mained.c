/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase_mained.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppuivif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 16:10:32 by ppuivif           #+#    #+#             */
/*   Updated: 2023/08/23 17:36:59 by ppuivif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a') && (str[i] <= 'z'))
		{
			str[i] = str[i] - 32;
		}
	i++;
	}
	return (str);
}

#include <stdio.h>

int main	(void)
{
	char	str[] = "frsTRDfR";
	printf("%s", ft_strupcase(str));
	return (0);
}
