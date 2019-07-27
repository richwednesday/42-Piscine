/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwok <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 12:41:38 by jiwok             #+#    #+#             */
/*   Updated: 2019/07/18 22:06:49 by jiwok            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int *arr;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	arr = (int*)malloc(sizeof(int) * ((max - min) + 1));
	i = 0;
	while ((min + i) < max)
	{
		arr[i] = min + i;
		i = i + 1;
	}
	arr[i] = '\0';
	*range = arr;
	return (i);
}
