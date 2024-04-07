/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_order.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelkalai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 06:18:04 by zelkalai          #+#    #+#             */
/*   Updated: 2024/03/25 06:18:05 by zelkalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../utils/push_swap.h"

int	stack_order(t_stack **a)
{
	t_stack	*last;

	last = last_node(*a);
	if (is_stack_ascending(*a))
		return (1);
	else
	{
		if (is_stack_descending(*a))
		{
			while (last->index != 0)
				rotate(a, 'a');
			return (1);
		}
		else
			return (0);
	}
}
