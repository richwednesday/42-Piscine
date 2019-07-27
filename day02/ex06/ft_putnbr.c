/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwok <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 22:49:30 by jiwok             #+#    #+#             */
/*   Updated: 2019/07/11 21:41:16 by jiwok            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_putnbr(int nb)
{
	int rev_num;

	rev_num = 0;
	if (nb < 0)
	{
		nb = nb * (-1);
		ft_putchar('-');
	}
	while (nb)
	{
		rev_num = rev_num * 10 + nb % 10;
		nb = nb / 10;
	}
	while (rev_num)
	{
		ft_putchar((rev_num % 10) + 48);
		rev_num = rev_num / 10;
	}
}
