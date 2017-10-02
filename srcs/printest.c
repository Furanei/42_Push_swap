/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbriffau <mbriffau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/02 03:34:29 by mbriffau          #+#    #+#             */
/*   Updated: 2017/10/03 01:10:28 by mbriffau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void 	print_array_void(int size, int slot, int *index)
{
	int i;
	 i = 0;

	if (slot) 
	{
		while(i < size)
		{
			ft_printf("{red}[ ]{eoc}%d\n", *index);
			*index += 1;
			i++;
		}}
	else{
		while(i < size)
		{
			ft_printf("{green}[ ]{eoc}%d\n", *index);
			*index += 1;
			i++;
		}}
}

void	printest(int *array, t_ps *p)
{
	int i;
	int n;
	int	index_array;

	index_array = 0;
	i = 0;
	n = p->a;
	ft_printf("{white}---PRINT---\n{green}Stack a{eoc} : size:%d, oa:%d, a:%d\n"
		, p->size_a, p->oa, p->a);
	print_array_void(p->oa , 0, &index_array);
	while (i < p->size_a)
	{
		if (i == p->a)
			ft_printf("{blue}>{eoc}");
		ft_printf("{green}[{eoc}%d{green}]{eoc}%4d\n", array[p->oa + i], index_array);
		i++;
		index_array++;
	}
	i = 0;
	n = p->b;
	ft_printf("{red}Stack b{eoc} : size:%d, ob:%d, b:%d\n", p->size_b, p->ob, p->b);
	print_array_void(p->ob - ((p->size_b + p->ob) / 2) , 1, &index_array);
	while (i < p->size_b)
	{
		if (i == p->b)
			ft_printf("{blue}>{eoc}");
		ft_printf("{red}[{eoc}%d{red}]{eoc}%4d\n", array[p->ob + i], index_array);
		i++;
		index_array++;
	}
	ft_printf("{white}----END----{eoc}\n");
}