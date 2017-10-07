/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_ops.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/07 13:40:21 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/07 13:40:21 by olkovale         ###   ########.fr       */
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
		ll = ft_lstadd(&ll, ft_lstnew(&op, sizeof(op)));
	}
	dbg_print(ll);
	return (ft_lstsrev(&ll));
}
