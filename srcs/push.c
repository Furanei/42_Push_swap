/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbriffau <mbriffau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/30 15:03:27 by mbriffau          #+#    #+#             */
/*   Updated: 2017/10/02 04:17:13 by mbriffau         ###   ########.fr       */
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

	i = 0;
	while (i < n)
	{
		array[o + n - i] = array[o + n - 1 - i];
		i++;
	}	
}

int			pa(int *array, t_ps *p)
{
	if (p->size_b < 1)
		return (0);
	p->oa--;
	push_helper_up(&*array, p->oa, p->a);
	array[p->oa + p->a] = array[p->ob + p->b];
	push_helper_down(&*array, p->ob, p->b);
	array[p->ob] = 0;
	p->ob++;
	p->size_a++;
	p->size_b--;
	return (1);
}

int			pb(int *array, t_ps *p)
{
	if (p->size_a < 1)
		return (0);
	p->ob--;
	push_helper_up(&*array, p->ob, p->b);
	array[p->ob + p->b] = array[p->oa + p->a];
	push_helper_down(&*array, p->oa, p->a);
	array[p->oa] = 0;
	p->oa++;
	p->size_b++;
	p->size_a--;
	return (1);
}
