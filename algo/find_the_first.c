/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_the_first.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelkalai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 06:15:57 by zelkalai          #+#    #+#             */
/*   Updated: 2024/03/25 06:15:59 by zelkalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../utils/push_swap.h"

t_stack	*find_the_first_element_in_stack(t_stack *a, int start, int end)
{
	t_stack	*s;

	s = a;
	while (a != NULL)
	{
		if (a->data >= start && a->data <= end)
		{
			s = a;
			return (s);
		}
		a = a->next;
	}
	return (s);
}
