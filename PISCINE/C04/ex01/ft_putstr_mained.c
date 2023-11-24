/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_mained.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppuivif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 21:11:58 by ppuivif           #+#    #+#             */
/*   Updated: 2023/08/28 20:41:46 by ppuivif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;	

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i] ,1);
		i++;
	}
}

int	main(void)
{
	char str[] = "Hello World";
	ft_putstr(str);
}
