/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelkalai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 03:59:19 by zelkalai          #+#    #+#             */
/*   Updated: 2024/03/25 10:25:54 by zelkalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../utils/push_swap.h"

void	reverse_rotate(t_stack **s, char c)
{
	t_stack	*tmp;
	t_stack	*last;

	if (stack_size(*s) < 2)
		return ;
	last = *s;
	while (last->next->next != NULL)
		last = last->next;
	tmp = last->next;
	last->next = NULL;
	tmp->next = *s;
	*s = tmp;
	set_index(*s);
	if (c == 'a')
		ft_putstr_fd("rra\n", 1);
	else if (c == 'b')
		ft_putstr_fd("rrb\n", 1);
}

void	reverse_rotate_r(t_stack **a, t_stack **b, int i)
{
	t_stack	*tmp;
	t_stack	*last;

	if (stack_size(*a) < 2 || stack_size(*b) < 2)
		return ;
	last = *a;
	while (last->next->next != NULL)
		last = last->next;
	tmp = last->next;
	last->next = NULL;
	tmp->next = *a;
	*a = tmp;
	set_index(*a);
	last = *b;
	while (last->next->next != NULL)
		last = last->next;
	tmp = last->next;
	last->next = NULL;
	tmp->next = *b;
	*b = tmp;
	set_index(*b);
	if (i == 1)
		ft_putstr_fd("rrr\n", 1);
}
