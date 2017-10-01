/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbriffau <mbriffau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/29 13:59:07 by mbriffau          #+#    #+#             */
/*   Updated: 2017/10/01 15:14:00 by mbriffau         ###   ########.fr       */
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

int		main(int ac, char **av)
{
	int		n;
	int	*array;

	n = 1;
	if (ac < 2)
		return (0);
	while (n < ac)
		is_number(av[n++]);
	array = &*parsing_array((ac), av);
	n = 0;
	while (n < (ac - 1))
		ft_printf("%d\n", array[n++]);
	check(array, ac - 1);
	return (1);
}