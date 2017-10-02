/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbriffau <mbriffau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/30 15:03:08 by mbriffau          #+#    #+#             */
/*   Updated: 2017/10/02 02:41:44 by mbriffau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sa(int *array, t_ps *p)
{
	if (p->size_a > 1)
		ft_swap(&array[p->oa + p->a]
			, &array[p->oa + p->a + 1]);	
}

void	sb(int *array, t_ps *p)
{
	if (p->size_b > 1)
		ft_swap(&array[p->ob + p->b]
			, &array[p->ob + p->b + 1]);	
}

void	ss(int *array, t_ps *p)
{
	sa(&*array, &*p);
	sb(&*array, &*p);
}