/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppuivif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 18:41:46 by ppuivif           #+#    #+#             */
/*   Updated: 2023/09/04 15:01:53 by ppuivif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	n;
	int	i;

	i = 1;
	n = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	else
	{
		while (i <= nb)
		{
			n = n * i;
			i++;
		}
		return (n);
	}
}
