/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppuivif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 14:22:37 by ppuivif           #+#    #+#             */
/*   Updated: 2023/08/24 10:57:34 by ppuivif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = 0;
	tmp = 0;
	while (i < (size - i))
	{	
		tmp = tab[i];
		tab[i] = tab[size -i -1];
		tab[size -i - 1] = tmp;
		i++;
	}
}

#include <stdio.h>
int	main(void)
{
	int i = 0;
	int tab[] = {54, 8, 78, 110, 5};
	int size = 5;
	while (i < size)
	{
		printf("%d\n", tab[i]);
		i++;
	}
	ft_rev_int_tab(tab, size);
	i = 0;
	while (i < size)
	{
		printf("%d\n", tab[i]);
		i++;
	}
	return (0);
}
