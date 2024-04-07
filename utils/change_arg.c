/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   change_arg.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelkalai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 06:20:45 by zelkalai          #+#    #+#             */
/*   Updated: 2024/03/25 06:20:46 by zelkalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../utils/push_swap.h"

void	change_arg_2(int *i, int argc, char ***argv)
{
	char	*str;

	str = NULL;
	while (*i < argc)
	{
		str = ft_strjoin(str, " ");
		str = ft_strjoin(str, (*argv)[(*i)++]);
	}
	*argv = ft_split(str, ' ');
	free(str);
	*i = 0;
	while ((*argv)[*i] != NULL)
		(*i)++;
}

int	change_arg(int argc, char ***argv)
{
	int	i;
	int	d;
	int	j;

	d = 0;
	i = 1;
	while ((*argv)[i] != NULL)
	{
		d = 0;
		j = 0;
		while ((*argv)[i][j])
		{
			if (ft_isdigit((*argv)[i][j]))
				d = 1;
			j++;
		}
		if (d == 0)
			return (-1);
		i++;
	}
	i = 1;
	change_arg_2(&i, argc, argv);
	return (i);
}
