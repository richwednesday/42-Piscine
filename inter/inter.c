/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwok <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/31 23:42:47 by jiwok             #+#    #+#             */
/*   Updated: 2019/08/01 00:09:20 by jiwok            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int		ft_check_exists(char ch, char *str, int index)
{
	int i;

	i = 0;
	while (str[i] != '\0' && (index == -1 || i < index))
	{
		if (ch == str[i])
			return (1);
		i += 1;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int i;
	int str1check;
	int str2check;

	if (argc == 3)
	{
		i = 0;
		while (argv[1][i] != '\0')
		{	
			str1check = ft_check_exists(argv[1][i], argv[1], i);
			str2check = ft_check_exists(argv[1][i], argv[2], -1);
			if (str1check == 0 && str2check == 1)
				write(1, &argv[1][i], 1);
			i += 1;
		}
	}
	write(1, "\n", 1);
}
