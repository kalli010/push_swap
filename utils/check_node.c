/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_node.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelkalai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 06:21:23 by zelkalai          #+#    #+#             */
/*   Updated: 2024/03/25 06:21:24 by zelkalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../utils/push_swap.h"

int	check_node(t_stack *node, t_stack **a)
{
	if (node == NULL)
	{
		while (*a != NULL)
		{
			node = *a;
			*a = (*a)->next;
			free(node);
		}
		return (0);
	}
	return (3);
}
