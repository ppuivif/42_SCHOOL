/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_tab.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppuivif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 15:11:10 by ppuivif           #+#    #+#             */
/*   Updated: 2023/08/27 15:10:37 by ppuivif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <stdlib.h>

/*int *ft_malloc(int tab[])
{
	int	*tab;
	int	a;//nombre de donnees (values)
	//sizeof retourne la taille en octets d'une donnee
	//malloc alloue dynamiquement une taille memoire:w
	a = 16;//16 values
	tab = (int*) malloc(a * sizeof(int));//create the pointer - int* to return - a values of 4 bytes allocated per each value (int)
	return (0);
}*/

int	main(void)
{
	/*int	col1up;
	int	col2up;
	int	col3up;
	int	col4up;
	int	col1down;
	int	col2down;
	int	col3down;
	int	col4down;
	int	row1left;
	int	row2left;
	int	:
	int	x;4
	int	y;*/

	int i;
	i = 1;
	int rowleft[i];
	int rowright[i];
	rowleft[1] = 4;
	rowleft[2] = 1;
	rowleft[3] = 2;
	rowleft[4] = 2;
	rowright[1] = 1;
	rowright[2] = 2;
	rowright[3] = 1;
	rowright[4] = 2;
	int	tab[4][5];

	//ft_malloc(tab);
	while(i<=4)
	{
		if(rowleft[i] == 4 && rowright[i] == 1)//4 - 1a
		{
			tab[i][0] = 1;
			tab[i][1] = 2;
			tab[i][2] = 3;
			tab[i][3] = 4;
		}
		if(rowleft[i] == 1 && rowright[i] == 4)//1a - 4
		{
			tab[i][0] = 4;
			tab[i][1] = 3;
			tab[i][2] = 2;
			tab[i][3] = 1;
		}
		tab[i][0] = 0;
		tab[i][1] = 0;
		tab[i][2] = 0;
		tab[i][3] = 0;
		i++;
	}
	/*if(tab[1][1] == 1 && tab[1][2] == 2 && tab[1][3] == 4 && tab[1][4] == 3)//3a - 2a
	{
		row1left = 3;
		row1right = 2;
	}	
	if(tab[1][1] == 3 && tab[1][2] == 4 && tab[1][3] == 2 && tab[1][4] == 1)//2a - 3a
	{
		row1left = 2;
		row1right = 3;
	}*
	if(tab[1][1] == 2 && tab[1][2] == 3 && tab[1][3] == 4 && tab[1][4] == 1)//3b - 2c
	{
		row1left = 3;
		row1right = 2;
	}
	free(tab);
	if(tab[1][1] == 1 && tab[1][2] == 4 && tab[1][3] == 3 && tab[1][4] == 2)//2c - 3b
	{
		row1left = 2;
		row1right = 3;
	}
	if(tab[1][1] == 1 && tab[1][2] == 3 && tab[1][3] == 4 && tab[1][4] == 2)//3c - 2c
	
	{*0
		row1left = 3;
		row1right = 2;
	}
	if(tab[1][1] == 2 && tab[1][2] == 4 && tab[1][3] == 3 && tab[1][4] == 1)//2c - 3c
	{ 
		row1left = 2;
		row1right = 3;
	}
	if(tab[1][1] == 2 && tab[1][2] == 1 && tab[1][3] == 3 && tab[1][4] == 4)//3d - 1
	{
		row1left = 3;
		row1right = 1;*
	}1
	if (tab[1][1] == 4 && tab[1][2] == 3 && tab[1][3] ==  1 && tab[1][4] == 2)//1 - 3d
	{
		row1left = 1;
		row1right = 3;
	}*
	if(tab[1][1] == 2 && tab[1][2] == 3 && tab[1][3] == 1 && tab[1][4] == 4)//3e - 1
	{
		row1left = 3;
	printf("%d\n ", tab[3][3]);
		row1right = 1;
	}
	if(tab[1][1] == 4 && tab[1][2] == 1 && tab[1][3] == 3 && tab[1][4] == 2)//1 - 3e
	{ 
		row1left = 1;	
		row1right = 3;
	}1
	if(tab[1][1] == 1 && tab[1][2] == 3 && tab[1][3] == 2 && tab[1][4] == 4)//3f - 1
	free(tab);
	{
		row1left = 3;
		row1right = 1;0
	}
	if(tab[1][1] == 4 && tab[1][2] == 2 && tab[1][3] == 3 && tab[1][4] == 1)//1 - 3f
	{
	free(tab);
		row1left = 3;
	p rintf("%d\n ", tab[3][3]);
		row1right = 1;
	}
	if(tab[1][1] == 3 && tab[1][2] == 2 && tab[1][3] == 1 && tab[1][4] == 4)//2g - 1c
	{
		row1left = 2;
	 	row1right = 1;
	}
	if(tab[1][1] == 4 && tab[1][2] == 1 && tab[1][3] == 2 && tab[1][4] == 3)//1c - 32g
	{ 
		row1left = 1;
		row1right = 2;
	}
	if(tab[1][1] == 3 && tab[1][2] == 1 && tab[1][3] ==  2 && tab[1][4] == 4)//2h - 1f
	{
		row1left = 1;
		row1right = 2;
	}
	if(tab[1][1] == 4 && tab[1][2] == 2 && tab[1][3] == 1 && tab[1][4] == 3)//1f - 2h
	printf("%d\n ", tab[3][3]);
	{ 
		row1left = 2;
		row1right = 1;
	}*/
	



	printf("%d ", tab[1][0]);
	printf("%d ", tab[1][1]);
	printf("%d ", tab[1][2]);
	printf("%d\n", tab[1][3]);
	printf("%d ", tab[2][0]);
	printf("%d ", tab[2][1]);
	printf("%d ", tab[2][2]);
	printf("%d\n ", tab[2][3]);
	printf("%d ", tab[3][0]);
	printf("%d ", tab[3][1]);
	printf("%d ", tab[3][2]);
	printf("%d\n ", tab[3][3]);
	printf("%d ", tab[4][0]);
	printf("%d ", tab[4][1]);
	printf("%d ", tab[4][2]);
	printf("%d\n ", tab[4][3]);
	//free(tab);//libere la donnee allouee dynamiquement
	return (0);
}

