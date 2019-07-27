/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwok <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 13:22:31 by jiwok             #+#    #+#             */
/*   Updated: 2019/07/18 22:26:33 by jiwok            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_calc_memory(int argc, char **argv)
{
	int i;
	int j;
	int k;

	i = 1;
	k = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
			j += 1;
		k += (j + 1);
		i += 1;
	}
	return (k);
}

char	*ft_concat_params(int argc, char **argv)
{
	int			i;
	int			j;
	int			k;
	char		*str;

	str = (char*)malloc(sizeof(char) * ft_calc_memory(argc, argv));
	i = 0;
	k = 0;
	while (i++ < (argc - 1))
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			str[k] = argv[i][j];
			j += 1;
			k += 1;
		}
		if (i != (argc - 1))
		{
			str[k] = '\n';
			k += 1;
		}
	}
	str[k] = '\0';
	return (str);
}
