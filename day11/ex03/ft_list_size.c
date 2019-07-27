/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwok <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 17:11:21 by jiwok             #+#    #+#             */
/*   Updated: 2019/07/24 21:52:56 by jiwok            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	int		i;
	t_list	*temp;

	if (!begin_list)
		return (0);
	i = 1;
	temp = begin_list;
	while (temp->next)
	{
		temp = temp->next;
		i += 1;
	}
	return (i);
}
