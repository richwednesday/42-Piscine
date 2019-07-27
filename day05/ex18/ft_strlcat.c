/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwok <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 14:56:47 by jiwok             #+#    #+#             */
/*   Updated: 2019/07/16 16:53:26 by jiwok            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int i;
	int j;
	int k;
	int n;

	i = 0;
	j = 0;
	k = 0;

	while (dest[i] != '\0')
	{
		i = i + 1;
	}

	while (src[j] != '\0')
	{
		j = j + 1;
	}

	n = size - i - 1;

	while (src[k] != '\0' && k < n)
	{
		dest[i + k] = src[k];
		k = k + 1;
	}

	dest[i + k] = '\0';

	return (i + j);
}

int		main(void)
{
	char test[256] = "\0zxcvzxcvzxcvxzcvzxcvzxcv";

	printf("%d-", ft_strlcat(test, "asdf", 16));
	printf("%s\n", test);
	printf("%d-", ft_strlcat(test, "asdf", 6));
	printf("%s\n", test);
	printf("%d-", ft_strlcat(test, "asdf", 4));
	printf("%s\n", test);
	printf("%d-", ft_strlcat(test, "", 16));
	printf("%s\n", test);
	printf("%d-", ft_strlcat(test, "asdf", 0));
	printf("%s\n", test);
}
