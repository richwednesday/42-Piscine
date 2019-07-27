/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwok <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 19:46:16 by jiwok             #+#    #+#             */
/*   Updated: 2019/07/16 22:46:12 by jiwok            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	if (to_find[0] == '\0')
		return (str);
	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] == to_find[j])
		{
			j = 1;
			while (to_find[j] != '\0' && to_find[j] == str[i + j])
			{
				if (to_find[j + 1] == '\0')
					return (&str[i]);
				j = j + 1;
			}
		}
		i = i + 1;
	}
	return (0);
}
