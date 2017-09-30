/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbriffau <mbriffau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/30 00:46:44 by mbriffau          #+#    #+#             */
/*   Updated: 2017/09/30 18:23:20 by mbriffau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../ft_printf/includes/ft_printf.h"


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
	size_t				size_a;
	size_t				size_b;
}						t_ml;


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