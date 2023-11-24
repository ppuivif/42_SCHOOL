/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppuivif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 21:57:29 by ppuivif           #+#    #+#             */
/*   Updated: 2023/09/04 12:34:26 by ppuivif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(char *argv1, char *argv2)
{
	char	tmp;

	tmp = *argv1;
	*argv1 = *argv2;
	*argv2 = tmp;
}
if (argv1[i] > argv[2])
	ft_swap(&argv[1], &argv[2])
else
	i++;




void	ft_swap(char *argv1, char *argv2)
{
	int i;
	char *tmp;

	i = 0;
	while (argv1[i] != '\0' || argv2[i] != '\0')
	{
		tmp[i] = argv1[i];
		argv1[i] = argv2[i];
		argv2[i] = tmp[i];
		i++;
	}
}

void	ft_comp(char *argv1, char *argv2)
{
	int i;

	i = 0;
	while (argv1[i] != '\0' || argv2[i] != '\0')
	{
		if ((argv1[i] - argv2[i]) < 0) 
			ft_swap(&argv1[i], &argv2[i]);
		i++;
	}
	return (0);
}


void	ft_sort(char *argv[][], int argc)
{
	char tmp[][];
	int i;

	i = 1;
	while (i < argc)
	{
		if (argv[i][j] > argv[i+1][j])
			ft_swap(argv[i], argv[i+1])
		if (argv[i][j] < argv[i+1][j])
			tmp[i][j] = argv[i+1][j];
		i++;
	}
}
		


int	main(int argc, char **argv)
{
	int i;

	i = 1;


	ft_sort(argv[][], argc);


	if (argc > 1)
		while (argc )
		{
			j = 0;
			while (argv[i][j] != '\0')
			{
				write(1, &argv[i][j], 1);
				j++;
			}
			write(1, "\n", 1);
			

		}


	}
	return (0);
}
