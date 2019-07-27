/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwok <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/26 13:26:50 by jiwok             #+#    #+#             */
/*   Updated: 2019/07/26 16:03:39 by jiwok            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_insert_data(t_btree **root, void *item,
		int (*cmpf)(void *, void *))
{
	t_btree *temp;

	if (!*root)
		*root = btree_create_node(item);
	else
	{
		temp = *root;
		if ((*cmpf)(item, temp->item) <= 0)
			btree_insert_data(&temp->left, item, cmpf);
		else
			btree_insert_data(&temp->right, item, cmpf);
	}
}
