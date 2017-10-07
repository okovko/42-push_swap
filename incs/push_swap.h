/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 18:36:34 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/07 13:38:10 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

typedef void	(*t_op_fp)(t_lst **, t_lst **);

typedef enum	e_ps_op
{
	E_PS_OP_NONE,
	E_PS_OP_SA,
	E_PS_OP_SB,
	E_PS_OP_SS,
	E_PS_OP_PA,
	E_PS_OP_PB,
	E_PS_OP_RA,
	E_PS_OP_RB,
	E_PS_OP_RR,
	E_PS_OP_RRA,
	E_PS_OP_RRB,
	E_PS_OP_RRR,
}				t_ps_op;

void			op_error(t_lst **a, t_lst **b);
void			op_sa(t_lst **a, t_lst **b);
void			op_sb(t_lst **a, t_lst **b);
void			op_ss(t_lst **a, t_lst **b);
void			op_pa(t_lst **a, t_lst **b);
void			op_pb(t_lst **a, t_lst **b);
void			op_ra(t_lst **a, t_lst **b);
void			op_rb(t_lst **a, t_lst **b);
void			op_rr(t_lst **a, t_lst **b);
void			op_rra(t_lst **a, t_lst **b);
void			op_rrb(t_lst **a, t_lst **b);
void			op_rrr(t_lst **a, t_lst **b);
t_bool			check(int ac, char **av);
t_lst			*parse_vals(int ac, char **av, char **edg);
t_bool			check_range(t_lst *ll);
t_bool			check_dupe(t_lst *ll);
t_bool			check_sorted(t_lst *ll);
void			dbg_print(t_lst *ll);
t_bool			check_ops(t_lst *vals, t_lst *ops);
t_lst			*parse_ops(void);
t_bool			check(int ac, char **av);
int				rot_sort(t_lst **ll);
int				sort(t_lst **ll);
void			populate_b(t_lst *a, t_lst *b);
