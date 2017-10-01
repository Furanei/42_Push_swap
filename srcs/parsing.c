/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbriffau <mbriffau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/30 19:25:33 by mbriffau          #+#    #+#             */
/*   Updated: 2017/10/01 02:09:29 by mbriffau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static t_ml	*init_t_manager(void)
{
	t_ml	*new;

	if (!(new = (t_ml*)malloc(sizeof(t_ml))))
		exit (-1);
	new->alst = NULL;
	new->blst = NULL;
	new->size_a = 0;
	new->size_b = 0;
	return (new);
}

static void	to_loop_the_loop(t_ps **alst)
{
	t_ps	**tmp;

	tmp = NULL;
	// printf("step\n" *(*mlst)->alst);
	*tmp = *alst;
	printf("first step\n");
	while((*tmp)->next)
		*tmp = (*tmp)->next;
	printf("second step\n");
	(*alst)->prev = *tmp;
	(*tmp)->next = *alst;
}

void	parsing_array(t_ml	*mlst, int nac, char **av)
{
	mlst = init_t_manager();
	while (nac > 0)
	{
		ps_lstadd(&*mlst, ps_lstnew(ft_atoi(av[nac--])));
		mlst->size_a++;
		printf("%d\n", (*mlst->alst)->value);
	}
	to_loop_the_loop(&*mlst->alst);
}
