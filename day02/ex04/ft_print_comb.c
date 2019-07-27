/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwok <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 13:07:21 by jiwok             #+#    #+#             */
/*   Updated: 2019/07/11 21:24:42 by jiwok            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_comb(void)
{
	int i;
	int j;
	int k;

	i = 47;
	while (++i <= 56)
	{
		j = i;
		while (++j <= 57)
		{
			k = j;
			while (++k <= 57)
			{
				ft_putchar(i);
				ft_putchar(j);
				ft_putchar(k);
				if (!(i == 55 && j == 56 && k == 57))
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
		}
	}
}
