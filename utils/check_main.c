/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_main.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelkalai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 06:21:17 by zelkalai          #+#    #+#             */
/*   Updated: 2024/03/28 14:23:50 by zelkalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../utils/push_swap.h"

int	check_main(int *argc, char ***argv, int i)
{
	i = 0;
	if (*argc < 2)
		return (1);
	if ((*argv)[1][0] == '\0')
	{
		ft_putstr_fd("Error\n", 2);
		return (1);
	}
	*argc = change_arg(*argc, &(*argv));
	if (*argc == -1)
	{
		ft_putstr_fd("Error\n", 2);
		return (1);
	}
	if (check_arg(*argc, *argv))
	{
		ft_putstr_fd("Error\n", 2);
		while ((*argv)[i] != NULL)
			free((*argv)[i++]);
		free(*argv);
		return (1);
	}
	return (0);
}
