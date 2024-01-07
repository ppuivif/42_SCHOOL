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
#include <stdio.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*str;
	size_t	j;
	size_t	i;
	
	j = nmemb * size;
	i = 0;
	if (!size || !nmemb)
		return (malloc(1));
	if (j > 4294967295 || (size > 65535 && nmemb > 65535))
		return (NULL);
	str = malloc(j);
	if (!str)
		return (NULL);
	while (i < j)
	{
		str[i] = '\0';
		i++;
	}
	return ((void *) str);
}

int	ft_strlen(char *s)
{
	int	i;
	
	i = 0;
	while (s && s[i])
		i++;
	return (i);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	str = ft_calloc((ft_strlen(s1) + ft_strlen(s2) + 1), sizeof (char));
	if (!str)
		return (NULL);
	while (s1 && s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	while (s2 && s2[j])
	{
		str[i + j] = s2[j];
		j++;
	}
	free(s1);
	s1 = NULL;
	return (str);
}

int	find_line_return(char *s)
{
	int		i;

	if (!s)
		return(0);
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == '\n')
			return (i + 1);
		i++;
	}
	return (0);
}

char	*begin_new_line(char *s1)
{
	char	*s2;
	int	len;
	int	i;
	int	j;

	len = ft_strlen(s1) - find_line_return(s1);
	if (len == 0)
	{
		free(s1);
		s1 = NULL;
		return (NULL);
	}
	s2 = ft_calloc(len + 1, sizeof(char));
	if (!s2)
		return (NULL);
	i = 0;
	j = find_line_return(s1);
	while (s1 && s1[j])
	{
		s2[i] = s1[j];
		i++;
		j++;
	}
	if (s1)
	{
		free(s1);
		s1 = NULL;
	}
	return (s2);
}

char	*close_current_line(char *s1)
{
	char	*s2;
	int	len;
	int	i;

	len = find_line_return(s1);
	s2 = ft_calloc((len + 1), sizeof(char));
	if (!s2)
		return (NULL);
	i = 0;
	while (s1 && s1[i] && i < len)
	{
		s2[i] = s1[i];
		i++;
	}
	return (s2);
}


