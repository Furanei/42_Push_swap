/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbriffau <mbriffau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/30 00:46:44 by mbriffau          #+#    #+#             */
/*   Updated: 2017/10/01 01:51:35 by mbriffau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libftprintf/includes/ft_printf.h"


typedef struct			s_push_swap
{
	int					value;
	int					rank;
	struct s_push_swap	*next;
	struct s_push_swap	*prev;
}						t_ps;

typedef struct			s_manager_lst
{
	t_ps				**alst;
	t_ps				**blst;
	int				size_a;
	int				size_b;
}						t_ml;

int			check(t_ml **mlst);
void		parsing_array(t_ml *mlst, int nac, char **av);

t_ps		*ps_lstnew(int value);
void		ps_lstadd(t_ml *mlst, t_ps *add);


void		swap_a(t_ml **mlst);
void		swap_b(t_ml **mlst);
void		swap_ss(t_ml **mlst);
int			push_a(t_ml **mlst);
int			push_b(t_ml **mlst);
void		rotate_a(t_ml **mlst);
void		rotate_b(t_ml **mlst);
void		rotate_rr(t_ml **mlst);
void		reverse_rotate_a(t_ml **mlst);
void		reverse_rotate_b(t_ml **mlst);
void		rotate_rrr(t_ml **mlst);

#endif