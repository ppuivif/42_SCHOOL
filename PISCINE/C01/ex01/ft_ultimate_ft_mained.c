/* ************************************************************************* */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppuivif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 17:54:28 by ppuivif           #+#    #+#             */
/*   Updated: 2023/08/20 20:36:26 by ppuivif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h> 

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}
int main(void)
{
        int c;
        int *nbr1;
        int **nbr2;
        int ***nbr3;
        int ****nbr4;
        int *****nbr5;
        int ******nbr6;
        int *******nbr7;
        int ********nbr8;
	int *********nbr;
	nbr1 = &c;
        nbr2 = &nbr1;
        nbr3 = &nbr2;
        nbr4 = &nbr3;
        nbr5 = &nbr4;
        nbr6 = &nbr5;
        nbr7 = &nbr6;
        nbr8 = &nbr7;
        nbr = &nbr8;
        c = 40;
        printf("%d\n", c);
        ft_ultimate_ft(nbr);
        printf("%d\n", c);
        return(0);
}

