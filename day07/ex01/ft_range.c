/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwok <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 12:08:55 by jiwok             #+#    #+#             */
/*   Updated: 2019/07/18 22:05:09 by jiwok            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *arr;
	int i;

	if (min >= max)
		return (0);
	arr = (int*)malloc(sizeof(int) * ((max - min) + 1));
	i = 0;
	while ((min + i) < max)
	{
		arr[i] = min + i;
		i = i + 1;
	}
	arr[i] = '\0';
	return (arr);
}
