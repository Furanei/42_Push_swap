/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbriffau <mbriffau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/30 18:55:24 by mbriffau          #+#    #+#             */
/*   Updated: 2017/10/01 15:43:54 by mbriffau         ###   ########.fr       */
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

static int		is_sorted(int *array, int size)
{
	int i;

	i = 1;
	while (i < size)
	{
		if (array[i - 1] > array[i])
			return (0);
		i++;
	}
	return (1);
}

static void	get_com(int *array, int size)
{
	char	*str;
	
	array[size] =0;///
	while (get_next_line(0, &str) == 1)
	{
		ft_printf("%s\n", str);
	}
}

void	check(int *array, int size)
{
	int *rank;

	rank = ranking(array, size);
	int i = 0;
	while (i < size)
		ft_printf("rank %d\n", rank[i++]);
	ft_printf("sort? %d\n", is_sorted(array, size));
	get_com(array, size);
}