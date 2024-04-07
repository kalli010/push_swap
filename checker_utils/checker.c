/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelkalai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 03:45:24 by zelkalai          #+#    #+#             */
/*   Updated: 2024/03/28 14:27:15 by zelkalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../utils/push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;

	a = NULL;
	b = NULL;
	if (argc < 2)
		return (1);
	if (argv[1][0] == '\0')
	{
		ft_putstr_fd("Error\n", 2);
		return (1);
	}
	argc = change_arg(argc, &argv);
	if (argc == -1)
	{
		ft_putstr_fd("Error\n", 2);
		return (1);
	}
	if (check_arg(argc, argv))
	{
		write_error(argv);
		return (1);
	}
	creat_stack(&a, argv);
	free_argv_and_check_stack(argv, a, b);
}
