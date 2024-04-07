/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_max.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelkalai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 06:15:21 by zelkalai          #+#    #+#             */
/*   Updated: 2024/03/25 06:15:23 by zelkalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../utils/push_swap.h"

t_stack	*find_max(t_stack *s)
{
	t_stack	*max;

	max = s;
	s = s->next;
	while (s != NULL)
	{
		if (max->data < s->data)
			max = s;
		s = s->next;
	}
	return (max);
}
