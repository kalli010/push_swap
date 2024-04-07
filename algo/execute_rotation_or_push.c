/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execute_rotation_or_push.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelkalai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 06:15:05 by zelkalai          #+#    #+#             */
/*   Updated: 2024/03/28 14:28:44 by zelkalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../utils/push_swap.h"

void	execute_rotation_or_push(t_op_data *op_data, t_stack *last)
{
	if (*(op_data->a) == NULL || \
		(last->data != op_data->param->array[op_data->param->size - 1] && \
			last->data > (*(op_data->b))->data))
	{
		if (op_data->tmp->index <= op_data->p / 2)
			rotate(op_data->b, 'b');
		else
			reverse_rotate(op_data->b, 'b');
	}
	else if (last->data == op_data->param->array[op_data->param->size - 1] || \
				last->data < (*op_data->b)->data)
	{
		push_to_a(op_data->a, op_data->b, 1);
		rotate(op_data->a, 'a');
	}
}
