/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbriffau <mbriffau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/30 00:46:44 by mbriffau          #+#    #+#             */
/*   Updated: 2017/10/02 04:17:20 by mbriffau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libftprintf/includes/ft_printf.h"


typedef struct		s_push_swap
{
	int		a;
	int		b;
	int		oa;
	int		ob;
	int		size_a;
	int		size_b;
}					t_ps;

void	printest(int *array, t_ps *p);//

int 	*parsing_array(int nac, char **av);
t_ps	*init_p(int ac);
void	check(int *array, int n, t_ps *p);
void	get_com(int *array, int size, t_ps *p);

int		pa(int *array, t_ps *p);
int		pb(int *array, t_ps *p);

void	sa(int *array, t_ps *p);
void	sb(int *array, t_ps *p);
void	ss(int *array, t_ps *p);

void	ra(t_ps *p);
void	rb(t_ps *p);
void	rr(t_ps *p);

void	rra(t_ps *p);
void	rrb(t_ps *p);
void	rrr(t_ps *p);

#endif