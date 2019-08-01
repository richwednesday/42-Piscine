/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwok <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/01 02:10:05 by jiwok             #+#    #+#             */
/*   Updated: 2019/08/01 02:51:50 by jiwok            ###   ########.fr       */
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

unsigned char	reverse_bits(unsigned char octet)
{
	int i;
	unsigned char res;

	i = 8;
	res = 0;
	while (i > 0)
	{
		res = (res << 1) + (octet % 2);
		octet >>= 1;
		i -= 1;
	}
	return (res);
}

int		main(void)
{
	print_bits(2);
	write(1, "\n", 1);
	print_bits(reverse_bits(2));
}
