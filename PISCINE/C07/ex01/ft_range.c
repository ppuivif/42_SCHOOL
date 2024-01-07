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

int	*ft_range(int min, int max)
{
	int	i;
	int	*tab;

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
