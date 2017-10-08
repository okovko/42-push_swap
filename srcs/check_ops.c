/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_ops.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/07 13:40:04 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/07 16:15:34 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include "push_swap.h"

static t_op_fp	g_op[] = (t_op_fp[])
{
	[E_PS_OP_NONE] = op_error,
	[E_PS_OP_SA] = op_sa,
	[E_PS_OP_SB] = op_sb,
	[E_PS_OP_SS] = op_ss,
	[E_PS_OP_PA] = op_pa,
	[E_PS_OP_PB] = op_pb,
	[E_PS_OP_RA] = op_ra,
	[E_PS_OP_RB] = op_rb,
	[E_PS_OP_RR] = op_rr,
	[E_PS_OP_RRA] = op_rra,
	[E_PS_OP_RRB] = op_rrb,
	[E_PS_OP_RRR] = op_rrr,
};

t_bool		check_ops(t_lst *vals, t_lst *ops)
{
	int		op;
	t_lst	*tmp;
	t_lst	*beg;
	
	tmp = NULL;
	beg = ops;
	while (true)
	{
		op = *(int *)ops->dat;
		g_op[op](&vals, &tmp);
		fprintf(stderr, "printing a\n");
		dbg_print(vals);
		fprintf(stderr, "printing b\n");
		dbg_print(tmp);
		if (E_PS_OP_NONE == op)
			return (false);
		ops = ops->nxt;
		if (beg == ops)
			break ;
	}
	return (NULL == tmp && ft_lstp_sorted(vals, ft_lstcmp_lli));
}
