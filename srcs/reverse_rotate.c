/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbriffau <mbriffau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/30 15:04:02 by mbriffau          #+#    #+#             */
/*   Updated: 2017/10/02 03:05:07 by mbriffau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rra(t_ps *p)
{
	if (p->size_a > 0)
	{
		p->a--;
		if (p->a < p->oa)
			p->a = (p->size_a - 1);
	}
}

void	rrb(t_ps *p)
{
	if (p->size_b > 0)
	{
		p->b--;
		if (p->b < p->ob)
			p->b = (p->size_b - 1);
	}
}

void	rrr(t_ps *p)
{
	rra(&*p);
	rrb(&*p);
}
