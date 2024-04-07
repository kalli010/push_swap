/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sorted.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelkalai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 06:14:52 by zelkalai          #+#    #+#             */
/*   Updated: 2024/03/25 06:14:55 by zelkalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../utils/push_swap.h"

int	check_sorted(t_stack *a)
{
	while (a->next != NULL)
	{
		if (a->data > a->next->data)
			return (1);
		a = a->next;
	}
	return (0);
}
