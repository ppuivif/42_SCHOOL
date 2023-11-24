/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppuivif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 17:54:30 by ppuivif           #+#    #+#             */
/*   Updated: 2023/09/04 22:13:41 by ppuivif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

int	*ft_range(int min, int max)
{
	int i;
	int *tab;

	i = 0;
	if (min >= max)
		return (NULL);
	else
	{
		tab = malloc((max - min) * sizeof(int));
		if (tab == NULL)
			return (NULL);
		while (i < (max - min))
			{
				tab[i] = min + i;
				i++;
			}
	}
	return (tab);
}
#include <stdio.h>
int	main (int argc, char **argv)
{
	int i = 0;
	int *tab;

	if (argc == 3)
	{
		tab = ft_range(atoi(argv[1]), atoi(argv[2]));
		if (atoi(argv[1]) >= atoi(argv[2]))
			printf("%ls\n", tab);
		while (i < (atoi(argv[2]) - atoi(argv[1])))
		{
			printf("%d\n", tab[i]);
			i++;
		}
	}
	return (0);
}
