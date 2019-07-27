/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwok <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 14:29:43 by jiwok             #+#    #+#             */
/*   Updated: 2019/07/24 21:43:24 by jiwok            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *temp;

	if (!*begin_list)
		*begin_list = ft_create_elem(data);
	else
	{
		temp = *begin_list;
		while (temp->next)
		{
			temp = temp->next;
		}
		temp->next = ft_create_elem(data);
	}
}
