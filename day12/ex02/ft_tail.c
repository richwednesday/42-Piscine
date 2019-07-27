/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwok <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 16:27:01 by jiwok             #+#    #+#             */
/*   Updated: 2019/07/25 23:41:17 by jiwok            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

void	ft_print_headers(char *file, int argc, int numf, int i)
{
	if ((argc - numf) != i)
		ft_putstr(1, "\n");
	ft_putstr(1, "==> ");
	ft_putstr(1, file);
	ft_putstr(1, " <==\n");
}

void	ft_run_args(int i, char c, int num, int argc, char **argv)
{
	int num_files;

	num_files = argc - i;
	while (i < argc)
	{
		if (num_files >= 2)
			ft_print_headers(argv[i], argc, num_files, i);
		c ? ft_display_chars(argv[i], num, c) : ft_display_lines(argv[i]);
		i += 1;
	}
}

int		main(int argc, char **argv)
{
	int		i;
	int		num;
	char	c;

	if (argc >= 2)
	{
		if (argv[1][0] == '-' && argv[1][1] == 'c')
		{
			if (argv[1][2] != '\0')
			{
				c = argv[1][2];
				num = ft_atoi(&argv[1][2]);
				i = 2;
			}
			else
			{
				c = argv[2][0];
				num = ft_atoi(argv[2]);
				i = 3;
			}
			ft_run_args(i, c, num);
		}
		ft_run_args(i, c, num, argc, argv);
	}
	return (0);
}
