/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppuivif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 15:20:42 by ppuivif           #+#    #+#             */
/*   Updated: 2023/11/03 15:38:19 by ppuivif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <stdlib.h>

int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
int	ft_strlen(const char *str);
int	ft_memset(void *str, int c, size_t n);
int	ft_bzero(void *s, size_t n);
int	ft_memcpy(void *dest, const void *src, size_t n);
void	ft_memmove(void *dest, const void *src, size_t n);



#endif
