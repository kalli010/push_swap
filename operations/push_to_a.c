/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_to_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelkalai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 06:19:33 by zelkalai          #+#    #+#             */
/*   Updated: 2024/03/25 06:19:34 by zelkalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../utils/push_swap.h"

void	push_to_a(t_stack **a, t_stack **b, int i)
{
	t_stack	*tmp;

	if (*b == NULL)
		return ;
	tmp = *a;
	*a = *b;
	*b = (*b)->next;
	(*a)->next = tmp;
	if (*a != NULL)
		set_index(*a);
	if (*b != NULL)
		set_index(*b);
	if (i == 1)
		ft_putstr_fd("pa\n", 1);
}
