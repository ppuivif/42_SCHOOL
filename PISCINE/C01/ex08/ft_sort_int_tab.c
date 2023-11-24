/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppuivif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 15:51:24 by ppuivif           #+#    #+#             */
/*   Updated: 2023/08/22 17:16:48 by ppuivif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int tmp;
	int i = 0;
	while (i < (size -1));
	{
		if ((tab[i] > tab[i+1])&&(i < (size -1)));
		{
			tmp = tab[i];
			tab[i] = tab[i+1];
			tab[i+1] = tmp;
			i++;
		}
		i++;
	}
}

#include <stdio.h>
int main (void)
{
	int tab [] = {24, 56, 2, 5, 8};
	int size = 5;
	int i = 0;
	while (i < size)
	{
		printf("%d\n", tab[i]);
		i++;
	}
	ft_sort_int_tab(tab, size);
	i = 0;
	while (i < size)
	{
		printf("%d\n", tab[i]);
		i++;
	}
}
