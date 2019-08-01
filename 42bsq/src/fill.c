/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwok <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 12:12:10 by jiwok             #+#    #+#             */
/*   Updated: 2019/07/31 23:03:59 by jiwok            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "funcs.h"

int		display_nice_map(char **map, int nrows, int ncols)
{
	int i;

	i = 0;
	while (i < nrows)
	{
		write(1, &map[i][0], ncols);
		write(1, "\n", 1);
		i += 1;
	}
	return (i);
}

void	update_quick_map(char **map, char ch, t_sqre a)
{
	int i;
	int j;

	i = 0;
	while (i < a.size)
	{
		j = 0;
		while (j < a.size)
		{
			map[a.i - i][a.j - j] = ch;
			j += 1;
		}
		i += 1;
	}
}

int		find_smallest(int i, int j, int k)
{
	if (i <= j && i <= k)
		return (i);
	else if (j <= i && j <= k)
		return (j);
	else
		return (k);
}

void	update_struct(t_sqre *a, int i, int j, int size)
{
	a->i = i;
	a->j = j;
	a->size = size;
}

int		size_map(t_mem b, char *defs, int nrows, int ncols)
{
	int		i;
	int		j;
	t_sqre	a;

	i = 0;
	update_struct(&a, 0, 0, 0);
	while (i < nrows)
	{
		j = 0;
		while (j < ncols)
		{
			if (b.arr[i][j] == defs[0])
				b.sizearr[i][j] = (i == 0 || j == 0) ? 1 : 1 +
					find_smallest(b.sizearr[i][j - 1],
							b.sizearr[i - 1][j], b.sizearr[i - 1][j - 1]);
			else if (b.arr[i][j] == defs[1])
				b.sizearr[i][j] = 0;
			if (b.sizearr[i][j] > a.size)
				update_struct(&a, i, j, b.sizearr[i][j]);
			j += 1;
		}
		i += 1;
	}
	update_quick_map(b.arr, defs[2], a);
	return (display_nice_map(b.arr, nrows, ncols));
}
