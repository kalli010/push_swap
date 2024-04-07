/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelkalai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 01:16:00 by zelkalai          #+#    #+#             */
/*   Updated: 2024/03/25 06:48:34 by zelkalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;
	int		i;
	int		v;

	i = 0;
	a = NULL;
	b = NULL;
	v = check_main(&argc, &argv, i);
	if (v == 1)
		return (1);
	creat_stack(&a, argv);
	while (argv[i] != NULL)
	{
		free(argv[i]);
		i++;
	}
	free(argv);
	if (argc > 2 && argc <= 3)
		sort_three(&a, argc);
	else if (argc <= 5)
		sort_five(&a, &b, argc);
	else
		sort(&a, &b);
	free_stack(&a);
}
