/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberresh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 14:24:21 by mberresh          #+#    #+#             */
/*   Updated: 2019/07/14 18:09:55 by akourkou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_putmid(int x)
{
	while (x > 2)
	{
		ft_putchar(' ');
		x--;
	}
	if (x > 1)
	{
		ft_putchar('B');
	}
}

void	ft_tb(int width)
{
	ft_putchar('A');
	while (width > 1)
	{
		if (width == 2)
		{
			ft_putchar('C');
		}
		else
		{
			ft_putchar('B');
		}
		width--;
	}
}

void	rush(int x, int y)
{
	int width;
	int height;

	width = x;
	height = y;
	while (height > 0)
	{
		if (height == 1 || height == y)
		{
			ft_tb(x);
		}
		else
		{
			ft_putchar('B');
			ft_putmid(x);
			width = x;
		}
		height--;
		ft_putchar('\n');
	}
}
