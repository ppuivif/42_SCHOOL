/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppuivif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 21:01:24 by ppuivif           #+#    #+#             */
/*   Updated: 2023/09/05 19:06:49 by ppuivif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char *argv)
{
	int	i;

	i = 0;
	while (argv[i] != '\0')
	{
		write (1, &argv[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc > 0)
	{
		ft_putchar(argv[0]);
		write (1, "\n", 1);
	}
	return (0);
}
