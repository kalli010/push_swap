/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_to_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelkalai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 03:59:12 by zelkalai          #+#    #+#             */
/*   Updated: 2024/03/25 06:19:41 by zelkalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../utils/push_swap.h"

void	push_to_b(t_stack **b, t_stack **a, int i)
{
	t_stack	*tmp;

	if (*a == NULL)
		return ;
	tmp = *b;
	*b = *a;
	*a = (*a)->next;
	(*b)->next = tmp;
	if (*a != NULL)
		set_index(*a);
	if (*b != NULL)
		set_index(*b);
	if (i == 1)
		ft_putstr_fd("pb\n", 1);
}
