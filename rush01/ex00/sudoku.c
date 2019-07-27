/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwok <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 20:00:06 by jiwok             #+#    #+#             */
/*   Updated: 2019/07/21 16:47:59 by sferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_solvesudoku(int **arr);
int		ft_fill_space(int **arr, int i, int j);
int		ft_safe(int **arr, int row, int column, int nb);

void	ft_print_sudoku(int **arr)
{
	int i;
	int j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			write(1, &arr[i][j], 1);
			if (j != 8)
				write(1, " ", 1);
			j += 1;
		}
		write(1, "\n", 1);
		i += 1;
	}
}

int		ft_solvesudoku(int **arr)
{
	int i;
	int	j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			if (arr[i][j] < 49 || arr[i][j] > 57)
				return (ft_fill_space(arr, i, j));
			else
				j += 1;
		}
		i += 1;
	}
	return (1);
}

int		ft_fill_space(int **arr, int i, int j)
{
	int	k;

	k = 1;
	while (k <= 9)
	{
		if (ft_safe(arr, i, j, k))
		{
			arr[i][j] = k + 48;
			if (ft_solvesudoku(arr) == 1)
				return (1);
			arr[i][j] = 48;
		}
		k += 1;
	}
	return (0);
}
