/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_min.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelkalai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 06:15:32 by zelkalai          #+#    #+#             */
/*   Updated: 2024/03/25 06:15:34 by zelkalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../utils/push_swap.h"

t_stack	*find_min(t_stack *s)
{
	t_stack	*min;

	min = s;
	s = s->next;
	while (s != NULL)
	{
		if (min->data > s->data)
			min = s;
		s = s->next;
	}
	return (min);
}
