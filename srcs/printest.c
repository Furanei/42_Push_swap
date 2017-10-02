/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbriffau <mbriffau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/02 03:34:29 by mbriffau          #+#    #+#             */
/*   Updated: 2017/10/02 03:56:19 by mbriffau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	printest(int *array, t_ps *p)
{
	int i;

	i = 0;
	ft_printf("{white}---PRINT---\n{green}Stack a{eoc} :\n");
	while (i < p->size_a)
	{
		ft_printf("a->%d\n", array[p->oa + p->a]);
		p->a++;
		if (p->a >= p->size_a)
			p->a = 0;
		i++;
	}
	i = 0;
	ft_printf("{red}Stack b{eoc} :\n");
	while (i < p->size_b)
	{
		ft_printf("b->%d\n", array[p->ob + p->b]);
		p->b++;
		if (p->b >= p->size_b)
			p->b = 0;
		i++;
	}
	ft_printf("{white}----END----{eoc}\n");
}