/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwok <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 14:44:59 by jiwok             #+#    #+#             */
/*   Updated: 2019/07/11 15:58:16 by jiwok            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void ft_print_combn(int n)
{
	int arr[n];
	int i = 0;

	while (i < n)
	{
		arr[i] = i;
		i = i + 1;
	}

	i = n - 1;

	while (arr[n-i] <= (10 - n - i))
	{
		int j;

		j = 0;

		while (j < n) 
		{
			ft_putchar('0' + arr[j]);
			j = j + 1;
		}
		
		ft_putchar('0' + arr[n - i]);
		arr[n - i] = arr[n- i] + 1;
	}
	ft_putchar('\n');
}

int main()
{
	ft_print_combn(2);
	return (0);
}
