/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwok <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 16:02:39 by jiwok             #+#    #+#             */
/*   Updated: 2019/07/16 21:38:52 by jiwok            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int	i;
	int res;
	int sign;

	i = 0;
	sign = 1;
	res = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			res = res * 10 + (str[i] - '0');
		else if (str[i] == '-')
			sign = -1;
		else if (!(str[i] == '\t' || str[i] == '\n' || str[i] == '\v' ||
				str[i] == ' ' || str[i] == '\f' || str[i] == '\r' ||
				str[i] == '+'))
			return (res * sign);
		i = i + 1;
	}
	return (res * sign);
}
