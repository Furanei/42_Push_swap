/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbriffau <mbriffau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/30 15:03:08 by mbriffau          #+#    #+#             */
/*   Updated: 2017/09/30 17:45:04 by mbriffau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	swap_a(t_ml **mlst)
{
	ft_swap(&(*(*mlst)->alst)->value, &(*(*mlst)->alst)->next->value);
	ft_swap(&(*(*mlst)->alst)->rank, &(*(*mlst)->alst)->next->rank);
}

void	swap_b(t_ml **mlst)
{
	ft_swap(&(*(*mlst)->blst)->value, &(*(*mlst)->blst)->next->value);
	ft_swap(&(*(*mlst)->blst)->rank, &(*(*mlst)->blst)->next->rank);
}

void	swap_ss(t_ml **mlst)
{
	swap_a(&*mlst);
	swap_b(&*mlst);
}