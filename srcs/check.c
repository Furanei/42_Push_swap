/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbriffau <mbriffau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/30 18:55:24 by mbriffau          #+#    #+#             */
/*   Updated: 2017/09/30 19:24:50 by mbriffau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int		check(t_ml **mlst)
{
	int 	i;
	t_ps	**tmp;

	i = 0;
	tmp = NULL;
	if ((*mlst)->size_b > 0 || (*mlst)->size_a <= 1)
		return (0);
	*tmp = *(*mlst)->alst;
	while (i < ((*mlst)->size_a - 1))
	{
		if (!((*tmp)->rank < (*tmp)->next->rank))
			return (0);
		*tmp = (*tmp)->next;
		i++;
	}
	return (1);
}