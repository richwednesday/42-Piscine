/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwok <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 12:39:04 by jiwok             #+#    #+#             */
/*   Updated: 2019/07/19 16:09:29 by jiwok            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	int			end;
	char		sp;
	char		ep;

	sp = (hour >= 0 && hour <= 11) ? 'A' : 'P';
	ep = sp;
	if (hour == 24 || hour == 23)
	{
		end = (hour == 24) ? 1 : 0;
		ep = 'A';
	}
	else if (hour == 11)
	{
		end = 12;
		ep = 'P';
	}
	else
		end = hour + 1;
	printf("THE FOLLOWING TAKES PLACE BETWEEN %i.00 %c.M. AND %i.00 %c.M.\n",
		hour, sp, end, ep);
}
