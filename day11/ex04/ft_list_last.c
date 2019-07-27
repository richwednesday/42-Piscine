/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwok <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 17:32:28 by jiwok             #+#    #+#             */
/*   Updated: 2019/07/24 21:54:59 by jiwok            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	t_list *temp;

	if (!begin_list)
		return (begin_list);
	temp = begin_list;
	while (temp->next)
	{
		if (!temp->next)
			return (temp);
		temp = temp->next;
	}
	return (temp);
}
