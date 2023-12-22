/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppuivif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 13:43:48 by ppuivif           #+#    #+#             */
/*   Updated: 2023/12/08 13:53:24 by ppuivif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 100
# endif

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

char		*get_next_line (int fd);
void		free_all(char *s1, char *s2);
int		ft_strlen(char *s);
char		*fill_str(char *s1, const char *s2, int i, int j);
char		*ft_strjoin(char *s1, char *s2);
int		find_line_return(char *s);
int		find_zero(char *s);
char		*begin_new_line(char *s1);
char		*close_current_line(char *s1);

#endif
