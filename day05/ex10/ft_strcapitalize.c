/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwok <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 21:17:18 by jiwok             #+#    #+#             */
/*   Updated: 2019/07/16 22:22:08 by jiwok            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_strupcase(char c)
{
	if (c >= 97 && c <= 122)
		c = c - 32;
	return (c);
}

char	ft_strlowcase(char c)
{
	if (c >= 65 && c <= 90)
		c = c + 32;
	return (c);
}

int		ft_isalphanum(char c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122) || (c >= 48 && c <= 57))
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	str[0] = ft_strupcase(str[0]);
	i = 1;
	while (str[i] != '\0')
	{
		if (!ft_isalphanum(str[i]))
		{
			if (ft_isalphanum(str[i + 1]))
			{
				str[i + 1] = ft_strupcase(str[i + 1]);
				i = i + 2;
			}
			else
				i = i + 1;
		}
		else
		{
			str[i] = ft_strlowcase(str[i]);
			i = i + 1;
		}
	}
	return (str);
}
