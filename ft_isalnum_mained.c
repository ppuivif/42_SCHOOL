/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum_mained.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppuivif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 09:58:23 by ppuivif           #+#    #+#             */
/*   Updated: 2023/11/03 16:42:27 by ppuivif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z'))
		|| ((c >= '0') && (c <= '9')))
		return (c);
	return (0);
}

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	if (argc == 2)
		printf("real function : %d\n", isalnum(atoi(argv[1])));
	if (argc == 3)
		printf("ft_function   : %d\n", ft_isalnum(atoi(argv[1])));
	return (0);
}
