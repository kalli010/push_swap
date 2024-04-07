/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_part.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelkalai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 06:16:05 by zelkalai          #+#    #+#             */
/*   Updated: 2024/03/25 06:16:06 by zelkalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../utils/push_swap.h"

void	first_part_1(t_stack **a, t_stack **b, t_stack *tmp, t_param *param)
{
	if (stack_size(*a) > 1)
	{
		tmp = find_the_first_element_in_stack(*a, param->array[param->start],
				param->array[param->end]);
		if (tmp->index < stack_size(*a) / 2)
		{
			while (tmp->index != 0)
				rotate(a, 'a');
		}
		else
		{
			while (tmp->index != 0)
				reverse_rotate(a, 'a');
		}
	}
	else
		tmp = *a;
	if (tmp->data < param->array[param->mid])
	{
		push_to_b(b, a, 1);
		if (stack_size(*b) > 1)
			rotate(b, 'b');
	}
	if (tmp->data >= param->array[param->mid])
		push_to_b(b, a, 1);
}

void	first_part(t_param *param, t_stack **a, t_stack **b)
{
	t_stack	*tmp;
	int		s;
	int		sh_size;

	s = param->size;
	tmp = *a;
	while ((*a) != NULL)
	{
		sh_size = param->end - param->start + 1;
		while (stack_size(*b) < sh_size)
			first_part_1(a, b, tmp, param);
		param->start -= param->offset;
		if (param->start <= 0)
			param->start = 0;
		param->end += param->offset;
		if (param->end >= s)
			param->end = stack_size(*b);
	}
}
