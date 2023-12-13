/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppuivif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 13:34:35 by ppuivif           #+#    #+#             */
/*   Updated: 2023/12/12 11:40:35 by ppuivif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

char	*get_next_line(int fd)
{
	int	nb_read_bytes;
//n est le retour de read, a savoir le nbre d'octets reellement lus
	size_t	i;
	static char	*buf;
//la variable buf est declaree en statique car elle doit conserver le contenu du debut de la ligne suivante pour l'ecrire (elle est statique entre open et close)
	char	*line;
//line sera retournee
	
//	i = 0;
//	str = NULL;
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	line = (char *)malloc(sizeof(char);
//malloc a 1, vide
	while (ft_end_of_line(line) = 0)
	{	
		nb_read_bytes = read(fd, buf, BUFFER_SIZE);
		if (nb_read_bytes == -1)
//erreur de lecture
			return(NULL);
		if (nb_read_bytes == 0)
//fin de fichier(read n'a rien lu)
			return(line);
//		buf[n] = 0;
		line = ft_strjoin(line, buf);
	}
	line = ft_strjoin(line, buf)
	buf = ft_begin_new_line(buf, nb_read_bytes);
	return (str);

}


int	main(void)
{
	int fd;
//	char	*tab;

	fd = open ("document", O_RDONLY);
//	tab = get_next_line(fd);
	printf("%s", get_next_line(fd));
	close (fd);
	return (0);
}
