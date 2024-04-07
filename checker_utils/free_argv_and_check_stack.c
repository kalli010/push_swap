/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_argv_and_check_stack.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelkalai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 06:18:40 by zelkalai          #+#    #+#             */
/*   Updated: 2024/03/26 12:38:49 by zelkalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../utils/push_swap.h"

void	free_argv_and_check_stack(char **argv, t_stack *a, t_stack *b)
{
	int	i;
	int	j;

	i = 0;
	while (argv[i] != NULL)
	{
		free(argv[i]);
		i++;
	}
	free(argv);
	j = run_tasks(&a, &b);
	if (j == 1)
	{
		free_stack(&a);
		free_stack(&b);
		return ;
	}
	check_verify_stack(a, b);
}
