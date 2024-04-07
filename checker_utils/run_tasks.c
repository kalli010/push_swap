/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_tasks.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelkalai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 06:19:07 by zelkalai          #+#    #+#             */
/*   Updated: 2024/03/25 06:19:08 by zelkalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../utils/push_swap.h"

int	run_tasks(t_stack **a, t_stack **b)
{
	char	*t;
	int		c;

	c = 0;
	t = get_next_line(0);
	while (t != NULL)
	{
		run_operations(t, a, b, &c);
		free(t);
		if (c == 1)
			return (1);
		t = get_next_line(0);
	}
	return (0);
}
