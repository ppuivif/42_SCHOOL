/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppuivif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 14:15:24 by ppuivif           #+#    #+#             */
/*   Updated: 2023/12/14 20:12:47 by ppuivif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <string.h>

char	*get_next_line(int fd)
{
	int			nb_read_bytes;
	static char	*buf;
	char		*tmp;
	char		*line;

//	nb_read_bytes = 0;
	if (fd < 0 || fd >= 1024 || BUFFER_SIZE <= 0)
		return (NULL);
	line = NULL;
	while (1)
	{
		tmp = ft_calloc((BUFFER_SIZE + 1), sizeof(char));
		if (!tmp)
			return (NULL);
		nb_read_bytes = read(fd, tmp, BUFFER_SIZE);
		if (nb_read_bytes == -1)
		{
			free_all(tmp, buf);
			return (NULL);
		}
		if (nb_read_bytes == 0)
//			return (end_of_file(buf, tmp, line));
		{	
			if (buf)
			{
				if (find_line_return(buf) > 0)
				{
					line = close_current_line(buf);
					buf = begin_new_line(buf);
					free_all(tmp, NULL);
					return (line);
				}
				line = ft_strjoin(line, buf);
				free(buf);
				buf = NULL;
				free(tmp);
				tmp = NULL;
				return (line);
			}
			else
			{
				free(tmp);
				free(buf);
				return (NULL);
			}
		}
		buf = ft_strjoin(buf, tmp);
//		free_all(tmp, NULL);
		free(tmp);
		if (buf == NULL)
			return (NULL);
		if (find_line_return(buf) > 0)
		{
			line = close_current_line(buf);
			buf = begin_new_line(buf);
			return (line);
		}
	}
}

/*int	main(void)
{
	int fd;
	char	*tab;
	int	i = 0;

	fd = open ("document", O_RDONLY);
//	if (open = -1) condition a inclure
	
	while (i < 8)
	{
		tab = get_next_line(fd);
		printf("%s", tab);
		free(tab);
		i++;
	}
	close (fd);
//close permet de fermer l'acces au fichier prealablement open
	return (0);
}*/

/*int	main(void)
{
	int fd;
	char	*tmp;
	
	tmp=calloc(11, sizeof (char));
	fd = open ("document2", O_RDONLY);
	read(fd, tmp, 10);
	printf("ab%scd", tmp);

}*/
