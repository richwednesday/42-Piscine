/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwok <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 10:25:18 by jiwok             #+#    #+#             */
/*   Updated: 2019/07/17 17:02:27 by jiwok            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i = i + 1;
	}
	i = s1[i] - s2[i];
	return (i);
}

void	ft_sort_array(int len, char *arr[])
{
	char	*temp;
	int		i;
	int		j;

	i = 1;
	while (i < (len - 1))
	{
		j = i + 1;
		while (j < len)
		{
			if (ft_strcmp(arr[i], arr[j]) >= 1)
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
			j += 1;
		}
		i += 1;
	}
}

int		main(int argc, char **argv)
{
	int i;
	int j;

	i = 1;
	ft_sort_array(argc, argv);
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			ft_putchar(argv[i][j]);
			j += 1;
		}
		ft_putchar('\n');
		i += 1;
	}
	return (0);
}
