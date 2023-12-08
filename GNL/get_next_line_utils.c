/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppuivif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 13:53:47 by ppuivif           #+#    #+#             */
/*   Updated: 2023/12/08 13:55:38 by ppuivif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <get_next_line.h>

/*int	read_buf(fd, buf, BUFFER_SIZE)
{
	if (fd == 0 || fd < 0)
		return(NULL)
	

}*/

int	ft_strlen(char *s)
{
	int	i;
	
	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_fill_str(char *s1, const char *s2, int i, int j)
{
	while (s2[j] != '\0')
	{
		s1[i] = s2[j];
		i++;
		j++;
	}
	s1[i] = '\0';
	return (s1);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	str = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof (char));
	if (str)
	{
		ft_fill_str(str, s1, i, i);
		i = ft_strlen(str);
		ft_fill_str(str, s2, i, j);
		i = ft_strlen(str);
		return (str);
	}
	return (NULL);
}
