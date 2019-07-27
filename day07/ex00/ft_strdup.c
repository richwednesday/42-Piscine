/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwok <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 11:46:32 by jiwok             #+#    #+#             */
/*   Updated: 2019/07/18 22:03:01 by jiwok            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char		*scpy;
	int			i;
	int			j;

	i = 0;
	while (src[i] != '\0')
		i += 1;
	scpy = (char*)malloc(sizeof(char) * (i + 1));
	j = 0;
	while (src[j] != '\0')
	{
		scpy[j] = src[j];
		j = j + 1;
	}
	scpy[j] = '\0';
	return (scpy);
}
