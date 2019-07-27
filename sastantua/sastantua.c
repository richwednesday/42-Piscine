/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwok <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 13:53:33 by jiwok             #+#    #+#             */
/*   Updated: 2019/07/14 23:43:25 by jiwok            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		g_height;
int		g_width;

void	ft_putchar(char c);

int		ft_need_dk(int size, int index, int door, int rows)
{
	int knob_width;
	int knob_height;

	knob_width = (size - 1) + door;
	knob_height = (size / 2) + 1;
	index = index + 1;
	if (index == knob_width && rows == knob_height)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int		ft_need_door(int size, int asts, int rows, int index)
{
	int door;
	int door_knob;

	size = (size % 2 == 0 ? size - 1 : size);
	if (rows <= size)
	{
		door = ((asts + 2) - size) / 2;
		index = index + 1;
		if (index >= door && index < (door + size))
		{
			if (size > 3)
				return (ft_need_dk(size, index, door, rows) == 1 ? 2 : 1);
			else
				return (1);
		}
		else
			return (0);
	}
	else
		return (0);
}

void	ft_putspaces(int asts)
{
	int i;
	int spaces;

	i = 0;
	spaces = (g_width - (asts + 2)) / 2;
	while (i < spaces)
	{
		ft_putchar(' ');
		i = i + 1;
	}
}

int		ft_putlevel(int asts, int rows, int tier, int size)
{
	int i;
	int nd;

	if (rows == 0 && tier++)
		return (asts + (tier % 2 == 0 ? tier + 2 : tier + 1));
	i = -1;
	ft_putspaces(asts);
	ft_putchar('/');
	while (++i < asts)
	{
		if (tier == size)
		{
			nd = ft_need_door(size, asts, rows, i);
			if (nd >= 1)
				nd == 1 ? ft_putchar('|') : ft_putchar('$');
			else
				ft_putchar('*');
		}
		else
			ft_putchar('*');
	}
	ft_putchar('\\');
	ft_putchar('\n');
	return (ft_putlevel(asts + 2, rows - 1, tier, size));
}

void	sastantua(int size)
{
	int i;
	int asts;

	i = 1;
	asts = 1;
	g_height = ((size * (size + 1)) / 2) + (2 * size);
	g_width = (((3 * g_height) - 4) - ((size - 1) / 2) + 2);
	if (size > 0)
	{
		while (i <= size)
		{
			asts = ft_putlevel(asts, i + 2, i, size);
			i = i + 1;
		}
	}
}
