/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_operations.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelkalai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 06:19:02 by zelkalai          #+#    #+#             */
/*   Updated: 2024/03/25 06:19:03 by zelkalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../utils/push_swap.h"

void	run_operations_2(char *t, int *c, t_stack **a, t_stack **b)
{
	if (!ft_strncmp(t, "rrr\n", 4))
		reverse_rotate_r(a, b, 0);
	else
	{
		ft_putstr_fd("Error\n", 2);
		*c = 1;
	}
}

void	run_operations(char *t, t_stack **a, t_stack **b, int *c)
{
	if (!ft_strncmp(t, "sa\n", 4))
		swap(a, 'c');
	else if (!ft_strncmp(t, "sb\n", 4))
		swap(b, 'c');
	else if (!ft_strncmp(t, "ss\n", 4))
		swap_s(a, b, 0);
	else if (!ft_strncmp(t, "pa\n", 4))
		push_to_a(a, b, 0);
	else if (!ft_strncmp(t, "pb\n", 4))
		push_to_b(b, a, 0);
	else if (!ft_strncmp(t, "ra\n", 4))
		rotate(a, 'c');
	else if (!ft_strncmp(t, "rb\n", 4))
		rotate(b, 'c');
	else if (!ft_strncmp(t, "rr\n", 4))
		rotate_r(a, b, 0);
	else if (!ft_strncmp(t, "rra\n", 4))
		reverse_rotate(a, 'c');
	else if (!ft_strncmp(t, "rrb\n", 4))
		reverse_rotate(b, 'c');
	else
		run_operations_2(t, c, a, b);
}
