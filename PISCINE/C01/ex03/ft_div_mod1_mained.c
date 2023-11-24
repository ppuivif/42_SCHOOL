/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppuivif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 14:26:17 by ppuivif           #+#    #+#             */
/*   Updated: 2023/08/21 19:05:51 by ppuivif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;//dereferencement : le pointeur envoie le resultat de l'operation a l'adresse pointee soit tmp1
	*mod = a % b;//dereferencement : le pointeur envoie le resultat de l'operation a l'adresse pointee soit tmp2
}

int	main(void)
{
	int a = 10;
	int b = 5;
	int tmp1;
	int tmp2;
	printf("%d\n", a);
	printf("%d\n", b);
	ft_div_mod(10, b, &tmp1, &tmp2);
	printf("%d\n", tmp1);
	printf("%d\n", tmp2);
	return(0);
}
