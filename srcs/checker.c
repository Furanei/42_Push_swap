/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbriffau <mbriffau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/29 13:59:07 by mbriffau          #+#    #+#             */
/*   Updated: 2017/10/01 02:08:51 by mbriffau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void		ft_error_KO(void)
{
	ft_putstr("error\n");
	exit(-1);
}

static int		is_number(char *s)
{
	int		i;

	i = 0;
	if (!s)
		ft_error_KO();
	while (s[i])
	{
		if (!ft_isdigit(s[i++]))
			ft_error_KO();
	}
	return (1);
}

static void		print_test(t_ml **mlst)
{
	t_ps	**ptr;
	int		i;

	i = 0;
	ptr = NULL;
	*ptr = *(*mlst)->alst;
	while(i < (*mlst)->size_a)
	{
		ft_printf("%d\n", (*ptr)->value);
		*ptr = (*ptr)->next;
		i++;
	}
}

int		main(int ac, char **av)
{
	t_ml	*mlst;
	int		n;

	mlst = NULL;
	n = 1;
	if (ac < 2)
		return (0);
	while (n < ac)
		is_number(av[n++]);
	parsing_array(&*mlst, (ac - 1), &*av);
	print_test(&mlst);
	return (1);
}