/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwok <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 16:13:04 by jiwok             #+#    #+#             */
/*   Updated: 2019/07/13 20:32:33 by jiwok            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int nbfixed;

	if (power == 0)
	{
		nb = 1;
	}
	else if (power < 0)
	{
		nb = 0;
	}
	else
	{
		nbfixed = nb;
		while (power > 1)
		{
			nb = nb * nbfixed;
			power = power - 1;
		}
	}
	return (nb);
}
