/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbriffau <mbriffau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/30 18:55:24 by mbriffau          #+#    #+#             */
/*   Updated: 2017/10/03 01:40:10 by mbriffau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static int		placing(int *array, int ncmp, int n)
{
	int		i;
	int 	total;

	i = 0;
	total = 0;
	while (i < n)
	{
		if (i != ncmp)
		{
			if (array[ncmp] > array[i])
				total++;
			else if (array[ncmp] == array[i])
				ft_error("a number is a duplicate\n");
		}
		i++;
	}
	return (total);
}

static int		*ranking(int *array, int size)
{
	int		*rank;
	int		i;

	i = 0;
	if (!(rank = (int*)malloc(sizeof(int) * size)))
		ft_error("error_malloc");
	while (i < size)
	{
		rank[i] = placing(array, i, size);
		i++;
	}
	return (rank);
}

void	check(int *array, int size, t_ps *p)
{
	int *rank;

	rank = ranking(array, size);
	printest(rank, p);
	get_com(rank, size, &*p);
}