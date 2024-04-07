/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_and_execute_operations.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelkalai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 06:15:15 by zelkalai          #+#    #+#             */
/*   Updated: 2024/03/25 06:15:16 by zelkalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../utils/push_swap.h"

void	find_and_execute_operations(t_op_data *op_data)
{
	int	f;

	f = check_s(*(op_data->a), &(op_data->tmp), op_data->max);
	if (f == 1)
		a(op_data->tmp, op_data->a);
	else
		process_operations_based_on_conditions(op_data);
}
