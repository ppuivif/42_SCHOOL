/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppuivif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 13:34:35 by ppuivif           #+#    #+#             */
/*   Updated: 2023/12/08 20:03:34 by ppuivif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

char	*get_next_line(int fd)
{
	int	n;
	size_t	i;
	char	buf[BUFFER_SIZE];
//	static char *str_init;
	char	str[BUFFER_SIZE];
	
	i = 0;
	while (str[i] != '\n')
	{	
		n = read(fd, buf, BUFFER_SIZE);
		if (fd == 0 || fd < 0)
			return(NULL);
//		if (n == 0)//Terminer
//			return(str);
		if (n == -1)//Erreur
			return(NULL);
		ft_strjoin(str, buf);
		i++;
	}
//	str_init = substr(buf, start, n)
	return (str);

}


int	main(void)
{
	int fd;
	char	*tab;

	fd = open ("document", O_RDONLY);
	tab = get_next_line(fd);
	printf("%s", tab);
	close (fd);
	return (0);
}
