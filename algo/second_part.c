/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   second_part.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelkalai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 06:17:10 by zelkalai          #+#    #+#             */
/*   Updated: 2024/03/25 06:35:15 by zelkalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../utils/push_swap.h"

void	second_part(t_param *param, t_stack **a, t_stack **b)
{
	t_op_data	op_data;

	op_data.a = a;
	op_data.b = b;
	op_data.param = param;
	op_data.p = param->size - 1;
	while (*b != NULL)
	{
		op_data.max = param->array[op_data.p];
		push_max_to_a(a, b, op_data.max);
		find_and_execute_operations(&op_data);
		op_data.p--;
	}
	check_a(a, param->array[0]);
}
