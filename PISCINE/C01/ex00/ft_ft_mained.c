/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppuivif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 21:58:11 by ppuivif           #+#    #+#             */
/*   Updated: 2023/08/20 16:03:19 by ppuivif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

/*int main(void)
{
	int *nbr;
	int c;
	c = 10;
	nbr = &c;
	write(1, &c, 1); ne fonctionne pas car write a besoin d'un char - voir modulo
	ft_ft(nbr);
	write(1, &c, 1);
}*/

int main(void)
{
	int c;
	c = 40;
	printf("%d", c);
	ft_ft(&c);
	printf("%d", c);
	return(0);
}
