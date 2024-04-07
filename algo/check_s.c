/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_s.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelkalai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 06:14:41 by zelkalai          #+#    #+#             */
/*   Updated: 2024/03/25 06:14:43 by zelkalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../utils/push_swap.h"

int	check_s(t_stack *s, t_stack **tmp, int max)
{
	*tmp = s;
	while (*tmp != NULL)
	{
		if ((*tmp)->data == max)
			return (1);
		*tmp = (*tmp)->next;
	}
	return (0);
}
