/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   order.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbriffau <mbriffau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/02 03:55:06 by mbriffau          #+#    #+#             */
/*   Updated: 2017/10/02 23:01:55 by mbriffau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static int		is_sorted(int *array, t_ps *p, int size)
{
	int i;
	int n;

	i = 0;
	if (p->size_a != size)
		return (0);
	n = p->a;
	while (i < size - 1)
	{
		if (array[p->oa + n] > array[p->oa + n + 1])
			return (0);
		n++;
		if (n >= p->size_a)
			n = 0;
		i++;
	}
	ft_printf("OK\n");
	return (1);
}

static void	new_com(int *array, t_ps *p, char *str)
{
	if (!ft_strcmp(str, "pa"))
	{
		ft_printf("{blue}[pa] detected !\n");
		pa(&*array, &*p);
	}
	else if (!ft_strcmp("pb", str))
	{
		ft_printf("{blue}[pb] detected !\n");
		pb(&*array, &*p);
	}
	else if (!ft_strcmp("sa", str))
	{
		ft_printf("{blue}[sa] detected !\n");
		sa(&*array, &*p);
	}
	else if (!ft_strcmp("sb", str))
	{
		ft_printf("{blue}[sb] detected !\n");
		sb(&*array, &*p);
	}
	else if (!ft_strcmp("ss", str))
	{
		ft_printf("{blue}[ss] detected !\n");
		ss(&*array, &*p);
	}
	else if (!ft_strcmp("rra", str))
	{
		ft_printf("{blue}[rra] detected !\n");
		rra(&*p);
	}
	else if (!ft_strcmp("rrb", str))
	{
		ft_printf("{blue}[rrb] detected !\n");
		rrb(&*p);
	}
	else if (!ft_strcmp("rrr", str))
	{
		ft_printf("{blue}[rrr] detected !\n");
		rrr(&*p);
	}
	else if (!ft_strcmp("ra", str))
	{
		ft_printf("{blue}[ra] detected !\n");
		ra(&*p);
	}
	else if (!ft_strcmp("rb", str))
	{
		ft_printf("{blue}[rb] detected !\n");
		rb(&*p);
	}
	else if (!ft_strcmp("rr", str))
	{
		ft_printf("{blue}[rr] detected !\n");
		rr(&*p);
	}
	else if (!ft_strcmp("esc", str))
	{
		ft_printf("{blue}[ESC] detected !\n");
		exit(0);
	}
}

void	get_com(int *array, int size, t_ps *p)
{
	char	*str;
	
	(is_sorted(array, p, size)) ? exit(1) : 0;
	while (get_next_line(0, &str) == 1)
	{
		new_com(&*array, &*p, str);
		printest(array, p);
		(is_sorted(array, p, size)) ? exit(1) : 0;
		free(str);
	}
}
