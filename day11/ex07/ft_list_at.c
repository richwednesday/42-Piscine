/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwok <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 20:19:51 by jiwok             #+#    #+#             */
/*   Updated: 2019/07/24 22:01:46 by jiwok            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list			*temp;
	unsigned int	i;

	if (!begin_list)
		return (0);
	i = 0;
	temp = begin_list;
	while (temp->next)
	{
		if (i == nbr)
			break ;
		temp = temp->next;
		i += 1;
	}
	if (i < nbr)
		return (0);
	else
		return (temp);
}
