/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbriffau <mbriffau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/30 15:03:27 by mbriffau          #+#    #+#             */
/*   Updated: 2017/09/30 18:21:40 by mbriffau         ###   ########.fr       */
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
	*(*mlst)->blst = (*tmp)->next;
	(*(*mlst)->blst)->prev = (*tmp)->prev;
	if ((*mlst)->size_b > 1)
		(*(*mlst)->blst)->prev->next = (*(*mlst)->blst);
	(*tmp)->next = *(*mlst)->alst;
	(*tmp)->prev = (*(*mlst)->alst)->prev;
	if ((*mlst)->size_a > 0)
		(*(*mlst)->alst)->prev->next = *tmp;
	(*(*mlst)->alst)->prev = *tmp;
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
	if (*(*mlst)->blst == NULL)
		return (0);
	*tmp = *(*mlst)->blst;
	*(*mlst)->blst = (*tmp)->next;
	(*(*mlst)->blst)->prev = (*tmp)->prev;
	if ((*mlst)->size_a > 1)
		(*(*mlst)->blst)->prev->next = (*(*mlst)->blst);
	(*tmp)->next = *(*mlst)->alst;
	(*tmp)->prev = (*(*mlst)->alst)->prev;
	if ((*mlst)->size_b > 0)
		(*(*mlst)->alst)->prev->next = *tmp;
	(*(*mlst)->alst)->prev = *tmp;
	*(*mlst)->alst = *tmp;
	tmp = NULL;
	(*mlst)->size_a -= 1;
	(*mlst)->size_b += 1;
	return (1);
}
