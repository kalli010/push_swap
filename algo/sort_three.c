/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelkalai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 06:17:57 by zelkalai          #+#    #+#             */
/*   Updated: 2024/03/25 06:17:58 by zelkalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../utils/push_swap.h"

void	sort_three(t_stack **a, int argc)
{
	t_stack	*max;

	if (argc == 3)
	{
		max = find_max(*a);
		if (max->index == 0)
			rotate(a, 'a');
		else if (max->index == 1)
			reverse_rotate(a, 'a');
	}
	if ((*a)->data > (*a)->next->data)
		swap(a, 'a');
}
