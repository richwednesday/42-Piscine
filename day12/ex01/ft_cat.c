/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwok <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 15:13:10 by jiwok             #+#    #+#             */
/*   Updated: 2019/07/25 20:56:33 by jiwok            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <errno.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/uio.h>
#include "funcs.h"

void	ft_print_error(char *file, char *str)
{
	ft_putstr(2, "ft_cat: ");
	ft_putstr(2, file);
	ft_putstr(2, str);
}

void	ft_display_file(char *file)
{
	int		fd;
	char	ch;

	fd = open(file, O_RDONLY);
	if (fd == -1)
		ft_print_error(file, ": No such file or directory\n");
	else
	{
		while (read(fd, &ch, 1) > 0)
			write(1, &ch, 1);
		if (errno == EISDIR)
			ft_print_error(file, ": Is a directory\n");
		close(fd);
	}
}

void	ft_read_input(void)
{
	char ch;

	while (read(0, &ch, 1))
		write(1, &ch, 1);
}

int		main(int argc, char **argv)
{
	int i;

	if (argc == 1)
		ft_read_input();
	else if (argc >= 2)
	{
		i = 1;
		while (i < argc)
		{
			if (argv[i][0] == '-' && !argv[i][1])
				ft_read_input();
			else
				ft_display_file(argv[i]);
			i += 1;
		}
	}
	return (0);
}
