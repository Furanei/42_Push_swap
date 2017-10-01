/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbriffau <mbriffau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/30 15:03:27 by mbriffau          #+#    #+#             */
/*   Updated: 2017/09/30 23:56:56 by mbriffau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int		push_a(t_ml **mlst)
{
	t_ps	**tmp;

	tmp = NULL;
	if (*(*mlst)->blst == NULL)
		return (0);
	*tmp = *(*mlst)->blst;
	if ((*mlst)->size_b > 1)
	{
		*(*mlst)->blst = (*(*mlst)->blst)->next;
		(*(*mlst)->blst)->prev = (*tmp)->prev;
		if ((*mlst)->size_b > 2)
			(*(*mlst)->blst)->prev->next = (*(*mlst)->blst);
	}
	else
		*(*mlst)->blst = NULL;
	if ((*mlst)->size_a > 0)
	{
		(*tmp)->next = *(*mlst)->alst;
		(*tmp)->prev = (*(*mlst)->alst)->prev;
		if ((*mlst)->size_a > 1)
			(*(*mlst)->alst)->prev->next = *tmp;
		(*(*mlst)->alst)->prev = *tmp;
	}
	else
	{
		(*tmp)->next = *tmp;
		(*tmp)->prev = *tmp;
	}
	*(*mlst)->alst = *tmp;
	tmp = NULL;
	(*mlst)->size_b -= 1;
	(*mlst)->size_a += 1;
	return (1);
}

int		push_b(t_ml **mlst)
{
	t_ps	**tmp;

	tmp = NULL;
	if (*(*mlst)->alst == NULL)
		return (0);
	*tmp = *(*mlst)->alst;
	if ((*mlst)->size_a > 1)
	{
		*(*mlst)->alst = (*tmp)->next;
		(*(*mlst)->alst)->prev = (*tmp)->prev;
		if ((*mlst)->size_a > 2)
			(*(*mlst)->alst)->prev->next = (*(*mlst)->alst);
	}
	else
		*(*mlst)->alst = NULL;
	if ((*mlst)->size_b > 0)
	{
		(*tmp)->next = *(*mlst)->blst;
		(*tmp)->prev = (*(*mlst)->blst)->prev;
		if ((*mlst)->size_b > 1)
			(*(*mlst)->blst)->prev->next = *tmp;
		(*(*mlst)->blst)->prev = *tmp;
	}
	else
	{
		(*tmp)->next = *tmp;
		(*tmp)->prev = *tmp;
	}
	*(*mlst)->blst = *tmp;
	tmp = NULL;
	(*mlst)->size_a -= 1;
	(*mlst)->size_b += 1;
	return (1);
}
