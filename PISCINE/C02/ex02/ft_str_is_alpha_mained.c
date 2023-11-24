/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppuivif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 08:56:28 by ppuivif           #+#    #+#             */
/*   Updated: 2023/08/23 17:57:34 by ppuivif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{	
		if (((str[i] >= 'A') && (str[i] <= 'Z'))
			|| ((str[i] >= 'a') && (str[i] <= 'z')))
		{			
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

#include <stdio.h>
int	main(void)
{
	char str[] = "e1d";
	ft_str_is_alpha(str);
	printf("%d", ft_str_is_alpha(str));
	return (0);
}
