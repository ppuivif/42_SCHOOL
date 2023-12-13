/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppuivif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 13:53:47 by ppuivif           #+#    #+#             */
/*   Updated: 2023/12/11 17:51:30 by ppuivif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_free(char *s)
{
	free(s);
	s = NULL;
}

int	ft_free_NULL(char *s)
{
	ft_free(s);
	return(NULL);
}

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

char	*ft_strjoin(char *s1, char *s2)
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
		free(s1);
		s1 = NULL;
		return (str);
	}
	return (NULL);
}

int	ft_end_of_line(const char *s)
{
	int		i;

	if (!s)
		return(NULL);
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == "/n")
			return (i));
		i++;
	}
	return (0);
}

/*char	*ft_substr(char	const *s, unsigned int start, size_t len)
{
	size_t		i;
	size_t		j;
	char		*str;

	i = start;
	j = 0;
	if (!s)
		return (NULL);
	if (start > (unsigned int)ft_strlen(s))
		return (ft_strdup(""));
	if (len > (ft_strlen(&s[start])))
		len = ft_strlen(&s[start]);
	str = (char *)malloc((len + 1) * sizeof (char));
	if (!str)
		ft_free_NULL(str);	
	else
	{
		while (j < len && s[i] != '\0')
		{
			str[j] = s[i];
			j++;
			i++;
		}
		str[j] = '\0';
		return (str);
	}
}*/

char	*ft_begin_new_line(char *s1, nb_read_bytes)
{
	char	*s2;
	int	len;
	int	i;
	int	j;

	len = nb_read_bytes - ft_end_of_line(s1);
	s2 = (char *)malloc((len + 1) * sizeof(char));
	if (!s2 || !s1)
		ft_free_NULL(s2);
	i = 0;
	j = ft_end_of_line(s1) + 1
	while (s1[i])
	{
		s2[i] = s1[j];
		i++;
		j++;
	}
	s2[i] = '\0';
	ft_free(s1);
	return (s2);
}
