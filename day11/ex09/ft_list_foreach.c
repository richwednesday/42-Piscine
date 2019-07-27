/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwok <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 23:21:28 by jiwok             #+#    #+#             */
/*   Updated: 2019/07/24 23:32:33 by jiwok            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list *temp;

	if (begin_list)
	{
		temp = begin_list;
		while (temp)
		{
			(*f)(temp->data);
			temp = temp->next;
		}
	}
}
