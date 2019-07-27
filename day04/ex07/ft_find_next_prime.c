/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwok <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 22:52:09 by jiwok             #+#    #+#             */
/*   Updated: 2019/07/13 23:18:59 by jiwok            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_find_next_prime(int nb)
{
	int i;

	if (nb < 2)
	{
		return (ft_find_next_prime(nb + 1));
	}
	else if (nb == 2 || nb == 3)
	{
		return (nb);
	}
	else if (nb % 2 == 0 || nb % 3 == 0)
	{
		return (ft_find_next_prime(nb + 1));
	}
	i = 5;
	while (i * i <= nb)
	{
		if (nb % i == 0 || nb % (i + 2) == 0)
		{
			return (ft_find_next_prime(nb + 1));
		}
		i = i + 6;
	}
	return (nb);
}
