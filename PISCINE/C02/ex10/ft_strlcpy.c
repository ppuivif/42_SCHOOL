/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppuivif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 15:32:01 by ppuivif           #+#    #+#             */
/*   Updated: 2023/09/02 15:40:27 by ppuivif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{

}*/

#include <string.h>
int main(void)
{
	char src[] = "question";
	char dest[] = "reponse";
	strlcpy(dest, src, 2);
	return (0);
}
