/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwok <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 15:23:32 by jiwok             #+#    #+#             */
/*   Updated: 2019/07/12 23:41:24 by jiwok            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	ft_strrev(char *str)
{
	int start;
	int end;
	char temp;	
	int lenn;

	lenn = 0;

	while (str[lenn])
	{
		lenn = lenn + 1;
	}

	start = 0;
	end = lenn;
	while (start <= end) 
	{
		temp = str[start];
		str[start] = str[end];
		str[end] = temp;
		start++;
		end--;

		printf("%s", &str[start]);
	}

	return *str;
}

int		main(void)
{
	char *str;

	str = "hexlo";

	int fcall;

	ft_strrev(str);

	return (0);
}
