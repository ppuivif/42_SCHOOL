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

void	ft_free(char *s)
{
	free(s);
	s = NULL;
}

char	*ft_free_NULL(char *s)
{
	ft_free(s);
	return(NULL);
}

int	ft_strlen(char *s)
{
	int	i;
	
	i = 0;
	while (s && s[i])
		i++;
	return (i);
}

char	*ft_fill_str(char *s1, const char *s2, int i, int j)

{
	while (s2 && s2[j] != '\0')
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
	str = (char *)calloc((ft_strlen(s1) + ft_strlen(s2) + 1), sizeof (char));
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
	return (str);
}

int	ft_end_line(char *s)//recherche du /n
{
	int		i;

	if (!s)
		return(0);
//0 a confirmer
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

#include <stdio.h>
//close retourne les derniers caracteres a inserer en fin de line
char	*ft_close_current_line(char *s1)
{
	char	*s2;
	int	len;
	int	i;

	len = ft_end_line(s1);
	s2 = (char *)calloc((len + 1), sizeof(char));//1 pour '\0'
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
char	*ft_begin_new_line(char *s1)
{
	char	*s2;
	int	len;
	int	i;
	int	j;

	len = ft_strlen(s1) - ft_end_line(s1);//-1 pour declage i0
	if (len == 0)
	{
		free(s1);
		return (NULL);
	}
	s2 = (char *)calloc(len + 1, sizeof(char));//+1 pour le '\0'
	if (!s2)//s1 vide deja verifie dans gnl 
		return (NULL);
	i = 0;
	j = ft_end_line(s1);
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
