/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelkalai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 01:15:41 by zelkalai          #+#    #+#             */
/*   Updated: 2024/03/25 06:20:52 by zelkalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_arg(int argc, char **argv)
{
	int	i;

	i = check_argv(argv, argc);
	if (i == 1)
		return (1);
	else if (i == 0)
		return (0);
	if (check_dup(argc, argv))
		return (1);
	return (0);
}
