/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   order.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbriffau <mbriffau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/02 03:55:06 by mbriffau          #+#    #+#             */
/*   Updated: 2017/10/02 04:34:56 by mbriffau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static int		is_sorted(int *array, t_ps *p, int size)
{
	int i;

	i = 0;
	if (p->size_a != size)
		return (0);
	while (i < size - 1)
	{
		if (array[p->oa + p->a] > array[p->oa + p->a + 1])
			return (0);
		p->a++;
		if (p->a >= p->size_a)
			p->a = 0;
		i++;
	}
	ft_printf("OK\n");
	return (1);
}

static void	new_com(int *array, t_ps *p, char *str)
{
	if (!ft_strcmp(str, "pa"))
		pa(&*array, &*p);
	else if (!ft_strcmp("pb", str))
		pb(&*array, &*p);
	else if (!ft_strcmp("sa", str))
		sa(&*array, &*p);
	else if (!ft_strcmp("sb", str))
		sb(&*array, &*p);
	else if (!ft_strcmp("ss", str))
		ss(&*array, &*p);
	else if (!ft_strcmp("rra", str))
		rra(&*p);
	else if (!ft_strcmp("rrb", str))
		rrb(&*p);
	else if (!ft_strcmp("rrr", str))
		rrr(&*p);
	else if (!ft_strcmp("ra", str))
		ra(&*p);
	else if (!ft_strcmp("rb", str))
		rb(&*p);
	else if (!ft_strcmp("rr", str))
		rr(&*p);
	else if (!ft_strcmp("esc", str))
		exit(0);
}

void	get_com(int *array, int size, t_ps *p)
{
	char	*str;
	
	while (get_next_line(0, &str) == 1)
	{
		new_com(&*array, &*p, str);
		printest(array, p);
		(is_sorted(array, p, size)) ? exit(1) : 0;
		free(str);
	}
}
