/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbriffau <mbriffau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/30 15:03:27 by mbriffau          #+#    #+#             */
/*   Updated: 2017/10/03 01:40:08 by mbriffau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	push_helper_up(int *array, int o, int n)
{
	int		i;

	i = 0;
	while (i < n)
	{
		array[o + i] = array[o + i + 1];
		i++;
	}
}

static void	push_helper_down(int *array, int o, int n)
{
	int		i;

	i = n + o;
	while (i > o)
	{
		array[i] = array[i - 1];
		i--;
	}
}

int			pa(int *array, t_ps *p)
{
	if (p->size_b < 1)
		return (0);
	if (p->size_a)
		p->oa--;
	push_helper_up(&*array, p->oa, p->a);
	array[p->oa + p->a] = array[p->ob + p->b];
	push_helper_down(&*array, p->ob, p->b);
	p->size_a++;
	p->size_b--;
	if (p->size_b)
	{
		p->ob++;
		if (p->b == p->size_b)
			p->b = 0;
	}
	return (1);
}

int			pb(int *array, t_ps *p)
{
	if (p->size_a < 1)
		return (0);
	if (p->size_b)
		p->ob--;
	push_helper_up(&*array, p->ob, p->b);
	array[p->ob + p->b] = array[p->oa + p->a];
	push_helper_down(&*array, p->oa, p->a);
	p->size_b++;
	p->size_a--;
	if (p->size_a)
	{
		p->oa++;
		if (p->a == p->size_a)
			p->a = 0;
	}
	return (1);
}
