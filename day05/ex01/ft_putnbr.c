/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwok <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 17:16:15 by jiwok             #+#    #+#             */
/*   Updated: 2019/07/16 20:34:42 by jiwok            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	int i;
	int nbs[11];

	if (nb == 0)
		ft_putchar('0');
	else if (nb < 0)
	{
		ft_putchar('-');
		if (nb == -2147483648)
		{
			ft_putchar('2');
			nb = 147483648;
		}
		else
			nb = nb * (-1);
	}
	i = 0;
	while (nb)
	{
		nbs[i] = nb % 10;
		nb = nb / 10;
		i = i + 1;
	}
	while (--i >= 0)
		ft_putchar(nbs[i] + 48);
}
