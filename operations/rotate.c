/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelkalai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 06:19:57 by zelkalai          #+#    #+#             */
/*   Updated: 2024/03/25 10:27:16 by zelkalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../utils/push_swap.h"

void	rotate(t_stack **s, char c)
{
	t_stack	*tmp;
	t_stack	*last;

	if (stack_size(*s) < 2)
		return ;
	tmp = *s;
	*s = (*s)->next;
	last = *s;
	while (last->next != NULL)
		last = last->next;
	last->next = tmp;
	tmp->next = NULL;
	set_index(*s);
	if (c == 'a')
		ft_putstr_fd("ra\n", 1);
	else if (c == 'b')
		ft_putstr_fd("rb\n", 1);
}

void	rotate_r(t_stack **a, t_stack **b, int i)
{
	t_stack	*tmp;
	t_stack	*last;

	if (stack_size(*a) < 2 || stack_size(*b) < 2)
		return ;
	tmp = *a;
	*a = (*a)->next;
	last = *a;
	while (last->next != NULL)
		last = last->next;
	last->next = tmp;
	tmp->next = NULL;
	set_index(*a);
	tmp = *b;
	*b = (*b)->next;
	last = *b;
	while (last->next != NULL)
		last = last->next;
	last->next = tmp;
	tmp->next = NULL;
	set_index(*b);
	if (i == 1)
		ft_putstr_fd("rr\n", 1);
}
