/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sferreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 14:19:37 by sferreir          #+#    #+#             */
/*   Updated: 2019/07/21 16:48:16 by sferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_used_in_box(int **arr, int startrow, int startcolumn, int nb)
{
	int i;
	int j;

	startrow = startrow - (startrow % 3);
	startcolumn = startcolumn - (startcolumn % 3);
	i = 0;
	while (i < 3)
	{
		j = 0;
		while (j < 3)
		{
			if (arr[i + startrow][j + startcolumn] == (nb + 48))
				return (1);
			j += 1;
		}
		i += 1;
	}
	return (0);
}

int		ft_safe(int **arr, int row, int column, int nb)
{
	int i;

	i = 0;
	while (i < 9)
	{
		if ((arr[row][i] > 48 && arr[row][i] <= 57 &&
					arr[row][i] == (nb + 48)) ||
				(arr[i][column] > 48 && arr[i][column] <= 57 &&
					arr[i][column] == (nb + 48)) ||
				ft_used_in_box(arr, row, column, nb) == 1)
			return (0);
		i += 1;
	}
	return (1);
}
