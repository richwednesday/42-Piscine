/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_input.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwok <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/31 05:38:43 by jiwok             #+#    #+#             */
/*   Updated: 2019/07/31 21:27:15 by jiwok            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int		ft_read_input(void)
{
	char	ch;
	int		fd;

	fd = open("filefromstdin.txt", O_WRONLY | O_CREAT | O_TRUNC);
	if (fd == -1)
		return (0);
	while (read(0, &ch, 1) == 1)
		write(fd, &ch, 1);
	close(fd);
	return (1);
}
