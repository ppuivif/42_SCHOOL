/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppuivif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 08:19:45 by ppuivif           #+#    #+#             */
/*   Updated: 2023/12/18 08:31:38 by ppuivif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int	i;
	unsigned char bit;

	i = 8;
	while (i > 0)
	{
		bit = (octet >> i & 1) + '0'; 
		write(1, &bit, 1);
		i--;
	}

}

int	main()
{
	int nb;

	nb = 2;
	print_bits(nb);
}
