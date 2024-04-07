/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_creat_array.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelkalai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 06:16:11 by zelkalai          #+#    #+#             */
/*   Updated: 2024/03/25 06:16:13 by zelkalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../utils/push_swap.h"

int	*ft_creat_array(t_stack *a, int size)
{
	int	i;
	int	*array;

	i = 0;
	array = (int *)malloc(sizeof(int) * size);
	if (array == NULL)
		return (array);
	while (a != NULL)
	{
		array[i++] = a->data;
		a = a->next;
	}
	sort_array(array, size);
	return (array);
}
