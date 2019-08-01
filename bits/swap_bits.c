/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwok <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/01 02:56:38 by jiwok             #+#    #+#             */
/*   Updated: 2019/08/01 03:04:41 by jiwok            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int div;

	div = 0b10000000;
	while (div)
	{
		if (div & octet)
			write(1, "1", 1);
		else
			write(1, "0", 1);
		div >>= 1;
	}
}

unsigned char	swap_bits(unsigned char octet)
{
	return ((octet >> 4) | (octet << 4));
}

int		main(void)
{
	print_bits(30);
	write(1, "\n", 1);
	print_bits(swap_bits(30));
}
