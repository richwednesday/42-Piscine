/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwok <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 15:20:37 by jiwok             #+#    #+#             */
/*   Updated: 2019/07/18 22:48:18 by jiwok            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int     ft_is_whitespace(char c)
{
    if (c == '\t' || c == '\n' || c == ' ')
        return (1);
    else
        return (0);
}

int		ft_count_words(char *str)
{
	int i;
    int j;
 
    if (*str == '\0')
        return (0);
    i = 0;
    j = 0;
    while (*str)
    {
        if (ft_is_whitespace(*str))
            j = 0;
        else
        {
            if (j == 0)
                i++;
            j = 1;
        }
		str++;
    }
    return (i);
}

char    **ft_allocate_memory(char *str, int i, int j)
{
	char    **arr;
 
    arr = (char**)malloc(sizeof(char *) * (ft_count_words(str) + 1));
    while (str[i] != '\0')
    {
        if (ft_is_whitespace(str[i]))
            arr[i++] = (char*)malloc(sizeof(char) * (j + 1));
        else
            j++;
        if (str[i + 1] == '\0')
            arr[i] = (char*)malloc(sizeof(char) * (j + 1));
		i++;
    }
    if (!(ft_is_whitespace(*(str - 1))))
        i++;
    arr[i] = 0;
    return (arr);
}

char	**ft_split_whitespaces(char *str)
{
	int i;
	int j;
	int k;
	char **arr;

	arr = ft_allocate_memory(str, 0, 0);

	i = 0;
	j = 0;
	k = 0;

	while (str[i] != '\0')
	{
		printf("in loop %s item %c j %i k %i\n", arr[k], str[i], j, k);
		if (ft_is_whitespace(str[i]))
		{
			printf("Now here %i \n", k);
			arr[k][j] = '\0';
			printf("Back slash zero closed\n");
			k += 1;
			j = 0;
		}
		else
		{
			arr[k][j] = str[i];
			j += 1;
		}
		i += 1;
	}

	arr[k][j] = '\0';

	return arr;
}

int		main(void)
{
	char** res;
for (res = ft_split_whitespaces("as df"); *res != 0; res++)
	printf("'%s',", *res);
printf("\n");
}
