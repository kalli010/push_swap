/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_operations.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelkalai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 06:16:53 by zelkalai          #+#    #+#             */
/*   Updated: 2024/03/25 06:33:55 by zelkalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../utils/push_swap.h"

void	process_operations_based_on_conditions(t_op_data *op_data)
{
	t_stack	*last;

	check_s(*(op_data->b), &(op_data->tmp), op_data->max);
	while (op_data->tmp->index > 0)
	{
		last = last_node(*(op_data->a));
		execute_rotation_or_push(op_data, last);
	}
	push_to_a(op_data->a, op_data->b, 1);
}
