/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_stack_ascending.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelkalai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 06:16:23 by zelkalai          #+#    #+#             */
/*   Updated: 2024/03/25 06:16:25 by zelkalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../utils/push_swap.h"

int	is_stack_ascending(t_stack *a)
{
	while (a->next != NULL)
	{
		if (a->data > a->next->data)
			return (0);
		a = a->next;
	}
	return (1);
}
