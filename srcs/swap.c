/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbriffau <mbriffau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/30 15:03:08 by mbriffau          #+#    #+#             */
/*   Updated: 2017/10/02 22:59:15 by mbriffau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sa(int *array, t_ps *p)
{
	int		tmp_1;
	int		tmp_2;

	tmp_1 = p->oa + p->a;
	tmp_2 = (p->a + 1) >= p->size_a ? p->oa : tmp_1 + 1;
	if (p->size_a > 1)
	{
		printf("swapa\n");
		ft_swap(&array[tmp_1], &array[tmp_2]);
	}
}

void	sb(int *array, t_ps *p)
{
	int		tmp_1;
	int		tmp_2;

	tmp_1 = p->ob + p->b;
	tmp_2 = (p->b + 1) >= p->size_b ? p->ob : tmp_1 + 1;
	if (p->size_b > 1)
	{
		printf("swapb\n");
		ft_swap(&array[tmp_1], &array[tmp_2]);
	}
}

void	ss(int *array, t_ps *p)
{
	sa(&*array, &*p);
	sb(&*array, &*p);
}