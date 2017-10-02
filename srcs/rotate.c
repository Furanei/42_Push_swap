/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbriffau <mbriffau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/30 15:03:22 by mbriffau          #+#    #+#             */
/*   Updated: 2017/10/02 22:20:48 by mbriffau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ra(t_ps *p)
{
	if (p->size_a > 0)
	{
		p->a++;
		if (p->a >= p->size_a)
			p->a = 0;
	}
}

void	rb(t_ps *p)
{
	if (p->size_b > 0)
	{
		p->b++;
		if (p->b >= p->size_b)
			p->b = 0;
	}
}

void	rr(t_ps *p)
{
	ra(&*p);
	rb(&*p);
}
