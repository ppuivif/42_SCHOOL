/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppuivif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 08:41:26 by ppuivif           #+#    #+#             */
/*   Updated: 2023/08/21 10:24:38 by ppuivif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_swap(int *a, int *b)
{
	int c;
	c = *a;
	*a = *b;
	*b = c;	
}
int	main(void)
{
	int x;
	int y;
	x = 40;
	y = 50;
	printf("%d\n", x);
	printf("%d\n", y);
	ft_swap(&x, &y);
	printf("%d\n", x);
	printf("%d\n", y);
	return(0);
}
