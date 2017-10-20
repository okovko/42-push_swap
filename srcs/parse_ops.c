/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_ops.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/07 13:40:21 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/20 10:59:16 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_map_kv		g_op_kvs[] = (t_map_kv[])
{
	{(void *)"sa", (void *)(int[]){E_PS_OP_SA}},
	{(void *)"sb", (void *)(int[]){E_PS_OP_SB}},
	{(void *)"ss", (void *)(int[]){E_PS_OP_SS}},
	{(void *)"pa", (void *)(int[]){E_PS_OP_PA}},
	{(void *)"pb", (void *)(int[]){E_PS_OP_PB}},
	{(void *)"ra", (void *)(int[]){E_PS_OP_RA}},
	{(void *)"rb", (void *)(int[]){E_PS_OP_RB}},
	{(void *)"rra", (void *)(int[]){E_PS_OP_RRA}},
	{(void *)"rrb", (void *)(int[]){E_PS_OP_RRB}},
	{(void *)"rrr", (void *)(int[]){E_PS_OP_RRR}},
	{(void *)"rr", (void *)(int[]){E_PS_OP_RR}},
};
static t_map		g_op_map =
{
	.sz = sizeof(g_op_kvs) / sizeof(g_op_kvs[0]),
	.key_sz = sizeof(char *),
	.val_sz = sizeof(int),
	.kvs = g_op_kvs,
};

static t_bool		is_space(char cc)
{
	return (ISSPACE(cc));
}

t_bool				parse_ops(t_lst **ops)
{
	char		*ss;
	t_map_kv	*kv;
	int			op;

	*ops = NULL;
	while (get_next_line(1, &ss) > 0)
	{
		if (false == ft_strp_each(ss, is_space))
			return (false);
		kv = ft_mapget(&g_op_map, (void *)ss, ft_map_keycmp_str);
		if (NULL == kv)
			return (false);
		op = *(int *)kv->val;
		ft_lstadd(ops, ft_lstnew(&op, sizeof(op)));
	}
	ft_lstsrev(ops);
	return (true);
}
