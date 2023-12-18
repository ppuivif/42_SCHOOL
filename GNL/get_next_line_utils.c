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

int	ft_strlen(char *s)
{
	int	i;
	
	i = 0;
	while (s && s[i])
		i++;
	return (i);
}

/*char	*ft_fill_str(char *s1, const char *s2, int i, int j)

{
	while (s2 && s2[j] != '\0')
	{
		s1[i] = s2[j];
		i++;
		j++;
	}
	s1[i] = '\0';
	return (s1);
}*/

char	*ft_strjoin(char *s1, char *s2)
{
//	printf("%s\n", "start str join");
	char	*str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	str = calloc((ft_strlen(s1) + ft_strlen(s2) + 1), sizeof (char));
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
	if(s1)
		free(s1);
	str[i + j] = '\0';
	free(s2);
	if(str[0] == '\0')
	{
		free(str);
		return (NULL);
	}
//	printf("%s\n", "end str join");
	return (str);
}

int	find_zero(char *s)//recherche du '\0
{
	int		i;

	if (!s)
		return(0);
	i = 0;
	while (i != ft_strlen(s))
	{
		if (s[i] == '\0')
			return (1);
//cas particulier du '\n' en debut de buf			
		else
			i++;
	}
	return (0);
}

int	find_line_return(char *s)//recherche du '\n'
{
	int		i;

	if (!s)
		return(0);
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == '\n')
			return (i + 1);
//cas particulier du '\n' en debut de buf			
		i++;
	}
	return (0);
}

//#include <stdio.h>
//close retourne les derniers caracteres a inserer en fin de line
char	*close_current_line(char *s1)
{
	char	*s2;
	int	len;
	int	i;

	len = find_line_return(s1);
	s2 = calloc((len + 1), sizeof(char));//1 pour '\0'
	if (!s2)
		return (NULL);
	i = 0;
	while (s1 && s1[i] && i < len)
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}

//begin retourne les premiers caracteres a inserer en debut de line
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
		return (NULL);
	}
	s2 = calloc(len + 1, sizeof(char));//+1 pour le '\0'
	if (!s2)//s1 vide deja verifie dans gnl 
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
		free(s1);
	s2[i] = '\0';
	return (s2);
//	ft_free(s2);
}
