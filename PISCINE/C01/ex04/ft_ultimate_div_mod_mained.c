/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppuivif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 20:25:02 by ppuivif           #+#    #+#             */
/*   Updated: 2023/08/24 10:27:14 by ppuivif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *a / *b;
	*b = tmp % *b;
}

int	main(void)
{
	int c = 5;
	int d = 2;
	ft_ultimate_div_mod(&c, &d);
	printf("%d\n", c);
	printf("%d\n", d);
	return(0);
}
