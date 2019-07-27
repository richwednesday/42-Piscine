/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwok <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 16:34:54 by jiwok             #+#    #+#             */
/*   Updated: 2019/07/13 20:35:32 by jiwok            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
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
		nb = nb * ft_recursive_power(nb, power - 1);
	}
	return (nb);
}
