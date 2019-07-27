/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwok <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 19:25:12 by jiwok             #+#    #+#             */
/*   Updated: 2019/07/24 21:57:22 by jiwok            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*list;
	t_list	*temp;
	int		i;

	i = 0;
	list = 0;
	while (i < ac)
	{
		temp = ft_create_elem(av[i]);
		temp->next = list;
		list = temp;
		i += 1;
	}
	return (list);
}
