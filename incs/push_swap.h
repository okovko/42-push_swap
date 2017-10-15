/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 18:36:34 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/15 03:34:15 by olkovale         ###   ########.fr       */
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
void			dbg_print(t_lst *ll);
t_bool			check(int ac, char **av);
t_bool			check_range(t_lst *nod);
t_bool			parse_vals(int ac, char **av, t_lst **ll);
t_bool			parse_ops(t_lst **ops);
t_bool			check_ops(t_lst *vals, t_lst *ops);
int				sort2_a_small(t_lst **aa, t_lst **bb);
int				sort3_a_small(t_lst **aa, t_lst **bb);
int				sort3_a_small_123(t_lst **aa, t_lst **bb);
int				sort3_a_small_132(t_lst **aa, t_lst **bb);
int				sort3_a_small_213(t_lst **aa, t_lst **bb);
int				sort3_a_small_231(t_lst **aa, t_lst **bb);
int				sort3_a_small_312(t_lst **aa, t_lst **bb);
int				sort3_a_small_321(t_lst **aa, t_lst **bb);
int				sort1_a(t_lst **aa, t_lst **bb);
int				sort1_b(t_lst **aa, t_lst **bb);
int				sort1_ab(t_lst **aa, t_lst **bb);
int				sort2_a(t_lst **aa, t_lst **bb);
int				sort2_b(t_lst **aa, t_lst **bb);
int				sort2_ab(t_lst **aa, t_lst **bb);
int				sort3_a(t_lst **aa, t_lst **bb);
int				sort3_a_123(t_lst **aa, t_lst **bb);
int				sort3_a_132(t_lst **aa, t_lst **bb);
int				sort3_a_213(t_lst **aa, t_lst **bb);
int				sort3_a_231(t_lst **aa, t_lst **bb);
int				sort3_a_312(t_lst **aa, t_lst **bb);
int				sort3_a_321(t_lst **aa, t_lst **bb);
int				sort3_b(t_lst **aa, t_lst **bb);
int				sort3_b_123(t_lst **aa, t_lst **bb);
int				sort3_b_132(t_lst **aa, t_lst **bb);
int				sort3_b_213(t_lst **aa, t_lst **bb);
int				sort3_b_231(t_lst **aa, t_lst **bb);
int				sort3_b_312(t_lst **aa, t_lst **bb);
int				sort3_b_321(t_lst **aa, t_lst **bb);
int				sort3_ab(t_lst **aa, t_lst **bb);
int				sort3_ab_123_123(t_lst **aa, t_lst **bb);
int				sort3_ab_123_132(t_lst **aa, t_lst **bb);
int				sort3_ab_123_213(t_lst **aa, t_lst **bb);
int				sort3_ab_123_231(t_lst **aa, t_lst **bb);
int				sort3_ab_123_312(t_lst **aa, t_lst **bb);
int				sort3_ab_123_321(t_lst **aa, t_lst **bb);
int				sort3_ab_132_123(t_lst **aa, t_lst **bb);
int				sort3_ab_132_132(t_lst **aa, t_lst **bb);
int				sort3_ab_132_213(t_lst **aa, t_lst **bb);
int				sort3_ab_132_231(t_lst **aa, t_lst **bb);
int				sort3_ab_132_312(t_lst **aa, t_lst **bb);
int				sort3_ab_132_321(t_lst **aa, t_lst **bb);
int				sort3_ab_213_123(t_lst **aa, t_lst **bb);
int				sort3_ab_213_132(t_lst **aa, t_lst **bb);
int				sort3_ab_213_213(t_lst **aa, t_lst **bb);
int				sort3_ab_213_231(t_lst **aa, t_lst **bb);
int				sort3_ab_213_312(t_lst **aa, t_lst **bb);
int				sort3_ab_213_321(t_lst **aa, t_lst **bb);
int				sort3_ab_231_123(t_lst **aa, t_lst **bb);
int				sort3_ab_231_132(t_lst **aa, t_lst **bb);
int				sort3_ab_231_213(t_lst **aa, t_lst **bb);
int				sort3_ab_231_231(t_lst **aa, t_lst **bb);
int				sort3_ab_231_312(t_lst **aa, t_lst **bb);
int				sort3_ab_231_321(t_lst **aa, t_lst **bb);
int				sort3_ab_312_123(t_lst **aa, t_lst **bb);
int				sort3_ab_312_132(t_lst **aa, t_lst **bb);
int				sort3_ab_312_213(t_lst **aa, t_lst **bb);
int				sort3_ab_312_231(t_lst **aa, t_lst **bb);
int				sort3_ab_312_312(t_lst **aa, t_lst **bb);
int				sort3_ab_312_321(t_lst **aa, t_lst **bb);
int				sort3_ab_321_123(t_lst **aa, t_lst **bb);
int				sort3_ab_321_132(t_lst **aa, t_lst **bb);
int				sort3_ab_321_213(t_lst **aa, t_lst **bb);
int				sort3_ab_321_231(t_lst **aa, t_lst **bb);
int				sort3_ab_321_312(t_lst **aa, t_lst **bb);
int				sort3_ab_321_321(t_lst **aa, t_lst **bb);
t_bool			is_123(int cmp1, int cmp2);
t_bool			is_132(int cmp1, int cmp2);
t_bool			is_213(int cmp1, int cmp2);
t_bool			is_231(int cmp1, int cmp2);
t_bool			is_312(int cmp1, int cmp2);
t_bool			is_321(int cmp1, int cmp2);
int				sort(t_lst **aa, t_lst **bb);
int				msort(t_lst **aa, t_lst **bb);
