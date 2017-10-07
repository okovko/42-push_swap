/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 17:29:22 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/06 08:51:03 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "push_swap.h"
#include "libft.h"

static t_map_kv		g_op_kvs[] = (t_map_kv[])
{
	{(void *)"sa", (void *)(int[]){E_PS_OP_SA}},
	{(void *)"sb", (void *)(int[]){E_PS_OP_SB}},
	{(void *)"ss", (void *)(int[]){E_PS_OP_SS}},
	{(void *)"pa", (void *)(int[]){E_PS_OP_PA}},
	{(void *)"pb", (void *)(int[]){E_PS_OP_PB}},
	{(void *)"ra", (void *)(int[]){E_PS_OP_RA}},
	{(void *)"rb", (void *)(int[]){E_PS_OP_RB}},
	{(void *)"rr", (void *)(int[]){E_PS_OP_RR}},
	{(void *)"rra", (void *)(int[]){E_PS_OP_RRA}},
	{(void *)"rrb", (void *)(int[]){E_PS_OP_RRB}},
	{(void *)"rrr", (void *)(int[]){E_PS_OP_RRR}},
};
static t_map		g_op_map =
{
	.sz = sizeof(g_op_kvs) / sizeof(g_op_kvs[0]),
	.key_sz = sizeof(char *),
	.val_sz = sizeof(int),
	.kvs = g_op_kvs,
};
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

t_bool		check_range(t_lst *ll)
{
	t_lst		*beg;
	long long	val;
	int			imin;
	int			imax;

	beg = ll;
	imin = (~(~0u >> 1));
	imax = (~0u >> 1);
	while (beg != ll->nxt)
	{
		val = *(long long *)ll->dat;
		if (val < (long long)imin || val > (long long)imax)
		{
			ft_putstr_fd("Error\n", 2);
			return (false);
		}
		ll = ll->nxt;
	}
	return (true);
}

t_bool		check_dupe(t_lst *ll)
{
	t_lst		*beg_outer;
	t_lst		*beg_inner;
	t_lst		*inner;
	long long	outer_val;
	long long	inner_val;

	beg_outer = ll;
	while (beg_outer != ll->nxt)
	{
		outer_val = *(long long *)ll->dat;
		ll = ll->nxt;
		inner = ll;
		beg_inner = inner;
		while (beg_inner != inner->nxt)
		{
			inner_val = *(long long *)inner->dat;
			if (outer_val == inner_val)
			{
				ft_putstr_fd("Error\n", 2);
				return (false);
			}
			inner = inner->nxt;
		}
	}
	return (true);
}

t_bool		check_sorted(t_lst *ll)
{
	long long	cur_val;
	long long	nxt_val;
	t_lst		*beg;

	beg = ll;
	while (true)
	{
		cur_val = *(long long *)ll->dat;
		ll = ll->nxt;
		nxt_val = *(long long *)ll->dat;
		if (beg == ll)
			break ;
		if (cur_val > nxt_val)
			return (false);
	}
	return (true);
}

void		dbg_print(t_lst *ll)
{
	t_lst	*beg;

	beg = ll;
	if (NULL == beg)
		return ;
	while (true)
	{
		fprintf(stderr, "%d\n", *(int *)ll->dat);
		ll = ll->nxt;
		if (beg == ll)
			break ;
	}
}

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
		//fprintf(stderr, "printing vals\n");
		//dbg_print(vals);
		//fprintf(stderr, "printing tmp\n");
		//dbg_print(tmp);
		if (E_PS_OP_NONE == op)
			return (false);
		ops = ops->nxt;
		if (beg == ops)
			break ;
	}
	return (NULL == tmp && check_sorted(vals));
}

t_lst		*parse_vals(int ac, char **av, char **edg)
{
	int				ii;
	long long		val;
	char			*left;
	char			*riht;
	t_lst			*ll;

	ll = NULL;
	ii = 1;
	left = av[ii];
	riht = NULL;
	while (ii < ac)
	{
		while (true)
		{
			val = ft_strtolli(left, &riht);
			if (left == riht)
				break ;
			left = riht;
			ft_lstadd(&ll, ft_lstnew(&val, sizeof(val)));
		}
		ii++;
		left = av[ii];
	}
	*edg = riht;
	return (ft_lstsrev(&ll));
}

t_lst		*parse_ops(void)
{
	t_lst		*ll;
	char		*ss;
	t_map_kv	*kv;
	int			op;

	ll = NULL;
	while (get_next_line(1, &ss) > 0)
	{
		kv = ft_mapget(&g_op_map, (void *)ss, ft_map_keycmp_str);
		if (NULL == kv)
			break ;
		op = *(int *)kv->val;
		//fprintf(stderr, "storing op %d\n", op);
		ll = ft_lstadd(&ll, ft_lstnew(&op, sizeof(int)));
	}
	dbg_print(ll);
	return (ft_lstsrev(&ll));
}

t_bool		check(int ac, char **av)
{
	t_lst	*vals;
	t_lst	*ops;
	char	*edg;
	t_bool	valid;
	
	valid = false;
	vals = parse_vals(ac, av, &edg);
	ops = NULL;
	if ('\0' != *edg)
		ft_putstr_fd("Error\n", 2);
	if ('\0' == *edg && check_range(vals) && check_dupe(vals))
	{
		ops = parse_ops();
		//fprintf(stderr, "parsed all ops\n");
		//dbg_print(ops);
		valid = check_ops(vals, ops);
	}
	ft_lstnfree(&vals, 1);
	ft_lstnfree(&ops, 1);
	return (valid);
}

