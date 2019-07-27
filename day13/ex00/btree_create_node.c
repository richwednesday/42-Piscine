/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwok <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/26 12:04:08 by jiwok             #+#    #+#             */
/*   Updated: 2019/07/26 12:11:00 by jiwok            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_btree.h"

t_btree		*btree_create_node(void *item)
{
	t_btree *elem;

	elem = malloc(sizeof(t_btree));
	if (elem)
	{
		elem->item = item;
		elem->left = 0;
		elem->right = 0;
	}
	return (elem);
}
