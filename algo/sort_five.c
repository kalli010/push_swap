/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelkalai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 01:18:15 by zelkalai          #+#    #+#             */
/*   Updated: 2024/03/25 06:17:50 by zelkalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../utils/push_swap.h"

void	sort_five(t_stack **a, t_stack **b, int argc)
{
	t_stack	*min;

	if (!check_sorted(*a))
		return ;
	while (argc > 3)
	{
		min = find_min(*a);
		if (min->index < argc / 2)
		{
			while (min->index != 0)
				rotate(a, 'a');
		}
		else
		{
			while (min->index != 0)
				reverse_rotate(a, 'a');
		}
		push_to_b(b, a, 1);
		argc--;
	}
	sort_three(a, argc);
	while ((*b) != NULL)
		push_to_a(a, b, 1);
}
