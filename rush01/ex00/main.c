/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sferreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 14:19:44 by sferreir          #+#    #+#             */
/*   Updated: 2019/07/21 16:44:58 by sferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int		ft_solvesudoku(int **arr);
void	ft_print_sudoku(int **arr);

int		**ft_allocate_memory(void)
{
	int **arr;
	int i;

	arr = (int **)malloc(sizeof(int *) * 10);
	i = 0;
	while (i < 9)
	{
		arr[i] = (int *)malloc(sizeof(int) * 10);
		i += 1;
	}
	arr[i] = 0;
	return (arr);
}

void	ft_assign_elements(int **arr, char **argv)
{
	int i;
	int j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			if (argv[i + 1][j] > 48 && argv[i + 1][j] <= 57)
				arr[i][j] = argv[i + 1][j];
			j += 1;
		}
		arr[i][j] = '\0';
		i += 1;
	}
}

int		main(int argc, char **argv)
{
	int **arr;

	if (argc == 10)
	{
		arr = ft_allocate_memory();
		ft_assign_elements(arr, argv);
		if (ft_solvesudoku(arr) == 1)
			ft_print_sudoku(arr);
		else
			write(1, "Error\n", 6);
	}
	return (0);
}
