/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwok <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 21:02:03 by jiwok             #+#    #+#             */
/*   Updated: 2019/07/24 23:16:13 by jiwok            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list *prev;
	t_list *next;
	t_list *current;

	if (*begin_list)
	{
		prev = 0;
		current = *begin_list;
		while (current->next)
		{
			next = current->next;
			current->next = prev;
			prev = current;
			current = next;
		}
		current->next = prev;
		*begin_list = current;
	}
}
