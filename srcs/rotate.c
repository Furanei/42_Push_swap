/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbriffau <mbriffau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/30 15:03:22 by mbriffau          #+#    #+#             */
/*   Updated: 2017/09/30 18:23:17 by mbriffau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rotate_a(t_ml **mlst)
{
	*(*mlst)->alst = (*(*mlst)->alst)->next;
}

void	rotate_b(t_ml **mlst)
{
	*(*mlst)->blst = (*(*mlst)->blst)->next;
}

void	rotate_rr(t_ml **mlst)
{
	rotate_a(&*mlst);
	rotate_b(&*mlst);
}
