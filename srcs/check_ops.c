/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_ops.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/07 13:40:04 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/20 19:20:05 by olkovale         ###   ########.fr       */
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

	if (NULL == vals)
		return (true);
	tmp = NULL;
	beg = ops;
	while (NULL != beg)
	{
		op = *(int *)ops->dat;
		if (op == E_PS_OP_NONE) printf("op_error\n");
		if (op == E_PS_OP_SA) printf("sa\n");
		if (op == E_PS_OP_SB) printf("sb\n");
		if (op == E_PS_OP_SS) printf("ss\n");
		if (op == E_PS_OP_PA) printf("pa\n");
		if (op == E_PS_OP_PB) printf("pb\n");
		if (op == E_PS_OP_RA) printf("ra\n");
		if (op == E_PS_OP_RB) printf("rb\n");
		if (op == E_PS_OP_RR) printf("rr\n");
		if (op == E_PS_OP_RRA) printf("rra\n");
		if (op == E_PS_OP_RRB) printf("rrb\n");
		if (op == E_PS_OP_RRR) printf("rrr\n");
		g_op[op](&vals, &tmp);
		printf("A\n");
		dbg_print(vals);
		printf("\nB\n");
		dbg_print(tmp);
		printf("\n\n");
		if (E_PS_OP_NONE == op)
			return (false);
		ops = ops->nxt;
		if (beg == ops)
			break ;
	}
	return (NULL == tmp && ft_lstp_sorted(vals, ft_lstcmp_lli));
}
