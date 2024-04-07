/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verify_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelkalai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 06:19:12 by zelkalai          #+#    #+#             */
/*   Updated: 2024/03/25 06:19:13 by zelkalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../utils/push_swap.h"

int	verify_stack(t_stack *a)
{
	if (a == NULL)
		return (1);
	while (a->next != NULL)
	{
		if (a->data > a->next->data)
			return (0);
		a = a->next;
	}
	return (1);
}
