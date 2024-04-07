/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelkalai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 06:20:20 by zelkalai          #+#    #+#             */
/*   Updated: 2024/03/25 10:28:16 by zelkalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../utils/push_swap.h"

void	swap(t_stack **s, char c)
{
	t_stack	*tmp;

	if (stack_size(*s) < 2)
		return ;
	tmp = *s;
	*s = (*s)->next;
	tmp->next = (*s)->next;
	(*s)->next = tmp;
	set_index(*s);
	if (c == 'a')
		ft_putstr_fd("sa\n", 1);
	else if (c == 'b')
		ft_putstr_fd("sb\n", 1);
}

void	swap_s(t_stack **a, t_stack **b, int i)
{
	t_stack	*tmp;

	if (stack_size(*a) < 2 || stack_size(*b) < 2)
		return ;
	tmp = *a;
	*a = (*a)->next;
	tmp->next = (*a)->next;
	(*a)->next = tmp;
	set_index(*a);
	tmp = *b;
	*b = (*b)->next;
	tmp->next = (*b)->next;
	(*b)->next = tmp;
	set_index(*b);
	if (i == 1)
		ft_putstr_fd("ss\n", 1);
}
