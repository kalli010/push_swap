/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_verify_stack.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelkalai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 06:18:24 by zelkalai          #+#    #+#             */
/*   Updated: 2024/03/25 06:18:26 by zelkalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../utils/push_swap.h"

void	check_verify_stack(t_stack *a, t_stack *b)
{
	if (verify_stack(a) && b == NULL)
	{
		ft_putstr_fd("OK\n", 1);
		free_stack(&a);
	}
	else
	{
		ft_putstr_fd("KO\n", 1);
		free_stack(&a);
		free_stack(&b);
	}
}
