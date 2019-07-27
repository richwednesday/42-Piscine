/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_chars.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwok <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 22:10:19 by jiwok             #+#    #+#             */
/*   Updated: 2019/07/25 23:28:12 by jiwok            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/uio.h>
#include "funcs.h"

int		ft_det_position(int cs, int num)
{
	if (cs < num)
		return (0);
	else
		return (cs - num);
}

int		ft_count_chars(char *file)
{
	int		fd;
	int		cs;
	char	ch;

	cs = 0;
	fd = open(file, O_RDONLY);
	if (fd == -1)
		ft_print_error(file, ": No such file or directory\n");
	else
	{
		while (read(fd, &ch, 1) > 0)
			cs += 1;
		close(fd);
	}
	return (cs);
}

void	ft_write_output(char *file, int cs)
{
	int		i;
	int 	fd;
	char	ch;

	fd = open(file, O_RDONLY);
	if (fd == -1)
		ft_print_error(file, ": No such file or directory\n");
	else
	{
		i = 0;
		while (read(fd, &ch, 1) > 0)
		{
			if (i >= cs)
				write(1, &ch, 1);
			i += 1;
		}
		close(fd);
	}
}

void	ft_display_chars(char *file, int num, char c)
{
	int		cs;

	if (c == '+')
		cs = num - 1;
	else
	{
		cs = ft_count_chars(file);
		if (cs)
			cs = ft_det_position(cs, num);
		else
			return ;
	}
	ft_write_output(file, cs);
}
