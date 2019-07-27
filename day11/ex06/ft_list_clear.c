/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwok <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 19:58:54 by jiwok             #+#    #+#             */
/*   Updated: 2019/07/24 21:59:48 by jiwok            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list *temp;

	if (*begin_list)
	{
		temp = *begin_list;
		while (temp)
		{
			temp = temp->next;
			free(temp);
		}
		*begin_list = 0;
	}
}
