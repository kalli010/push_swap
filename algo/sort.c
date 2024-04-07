/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelkalai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 06:17:30 by zelkalai          #+#    #+#             */
/*   Updated: 2024/03/26 12:15:58 by zelkalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../utils/push_swap.h"

void	sort(t_stack **a, t_stack **b)
{
	t_param	*param;

	if (!is_stack_ascending(*a))
	{
		param = (t_param *)malloc(sizeof(t_param));
		if (param == NULL)
			return ;
		param->size = stack_size(*a);
		param->array = ft_creat_array(*a, param->size);
		if (param->array == NULL)
			return ;
		param->mid = param->size / 2 - 1;
		param->div = set_param_div(param->size);
		param->offset = param->size / param->div;
		param->start = param->mid - param->offset;
		param->end = param->mid + param->offset;
		first_part(param, a, b);
		second_part(param, a, b);
		free(param->array);
		free(param);
	}
}
