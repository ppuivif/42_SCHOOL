/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppuivif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 11:15:08 by ppuivif           #+#    #+#             */
/*   Updated: 2023/08/19 15:51:21 by ppuivif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush01(void)
{
	int a;
	int b;
	int x;
	int y;
	a = 2;
	b = 2;
	x = 1;
	y = 5;
	if (x >= 1 && y >= 1)
	{
		write(1, "o", 1);//1er caractere en haut a gauche / a enlever
		while (a < x)//1ere ligne
		{
			write(1, "-", 1);
			a++;
		}
		if (x > 1)
			write(1, "o", 1);//dernier caractere en haut a droite
		write(1, "\n", 1);
		a = 2;
		while (b < y)
		{
			write(1, "|", 1);//debut lignes intermediaires
			while (a < x)
			{
				write(1, " ", 1);//milieu lignes intermediaires
				a++;
			}
			if (x > 1)
				write(1, "|", 1);//fin lignes intermediaires
			write(1, "\n", 1);
			a = 2;
			b++;
		}
		if (y > 1)
		{	
			if (x >1)
				write(1, "o", 1);//premier caractere en bas a droite 
			while (a < x)
                	{       
                 	      	write(1, "-", 1);
                        	a++;
               		 }       
			write(1, "o\n", 2);//dernier caractere en bas a droite
		}
	}
}

int	main(void)
{
	rush01();
	return (0);
}
