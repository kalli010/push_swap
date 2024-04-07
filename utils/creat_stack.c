/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   creat_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelkalai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 06:21:34 by zelkalai          #+#    #+#             */
/*   Updated: 2024/03/25 06:21:35 by zelkalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../utils/push_swap.h"

int	creat_stack(t_stack **a, char **argv)
{
	int		i;
	t_stack	*last;
	t_stack	*node;
	int		n;

	i = 0;
	while (argv[i] != NULL)
	{
		n = 3;
		node = creat_new_node(argv, i);
		n = check_node(node, a);
		if (n == 0)
			return (0);
		if (*a == NULL)
			*a = node;
		else
		{
			last = *a;
			while (last->next != NULL)
				last = last->next;
			last->next = node;
		}
		i++;
	}
	return (1);
}
