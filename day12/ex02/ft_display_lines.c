/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_lines.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwok <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 21:18:42 by jiwok             #+#    #+#             */
/*   Updated: 2019/07/25 22:37:45 by jiwok            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <errno.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/uio.h>
#include "funcs.h"

int		ft_last_ten(int nb)
{
	if (nb < 10)
		return (nb);
	else
		return (nb - 10);
}

int		ft_count_lines(char *file)
{
	int		fd;
	int		nl;
	char	ch;
	
	nl = 0;
	fd = open(file, O_RDONLY);
	if (fd == -1)
		ft_print_error(file, ": No such file or directory\n");
	else
	{
		while (read(fd, &ch, 1) > 0)
		{
			if (ch == '\n')
				nl += 1;
		}
		if (errno == EISDIR)
			ft_print_error(file, ": Is a directory\n");
		close(fd);
	}
	return (nl);
}

void	ft_display_lines(char *file)
{
	int		fd;
	int		nl;
	int		i;
	char	ch;

	nl = ft_count_lines(file);
	if (nl)
	{
		nl = ft_last_ten(nl);
		fd = open(file, O_RDONLY);
		if (fd == -1)
			ft_print_error(file, ": No such file or directory\n");
		else
		{
			i = 0;
			while (read(fd, &ch, 1) > 0)
			{
				if (ch == '\n')
					i += 1;
				if (i >= nl)
					write(1, &ch, 1);
			}
			if (errno == EISDIR)
				ft_print_error(file, ": Is a directory\n");
			close(fd);
		}
	}
}
