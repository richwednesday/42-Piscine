/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwok <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 14:29:00 by jiwok             #+#    #+#             */
/*   Updated: 2019/07/25 20:07:26 by jiwok            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/uio.h>
#include "funcs.h"

#define BUF_SIZE 10

int		ft_display_file(char *file)
{
	int		fd;
	int		redret;
	char	buf[BUF_SIZE + 1];

	fd = open(file, O_RDONLY);
	if (fd == -1)
		return (1);
	redret = read(fd, buf, BUF_SIZE);
	while (redret > 0)
	{
		buf[redret] = '\0';
		ft_putstr(buf);
		redret = read(fd, buf, BUF_SIZE);
	}
	if (redret == -1)
		return (1);
	return (close(fd) == -1 ? 1 : 0);
}

int		main(int argc, char **argv)
{
	if (argc == 1)
	{
		write(2, "File name missing.\n", 19);
		return (1);
	}
	else if (argc > 2)
	{
		write(2, "Too many arguments.\n", 20);
		return (1);
	}
	else if (argc == 2)
		return (ft_display_file(argv[1]));
}
