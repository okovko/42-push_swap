/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   merge.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/08 15:45:17 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/18 19:49:44 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * sort pass works, just make sure merge pass works, should be good then
 */

#include "push_swap.h"

int				merge_a_put(t_lst **aa, t_lst **bb)
{
	op_pa(aa, bb);
	ft_putstr("pa\n");
	op_ra(aa, bb);
	ft_putstr("ra\n");
	return (2);
}

int				merge_b_put(t_lst **aa, t_lst **bb)
{
	op_pb(aa, bb);
	ft_putstr("pb\n");
	op_rb(aa, bb);
	ft_putstr("rb\n");
	return (2);
}

int				merge_a_rot(t_lst **aa, t_lst **bb)
{
	op_ra(aa, bb);
	ft_putstr("ra\n");
	return (1);
}

int				merge_b_rot(t_lst **aa, t_lst **bb)
{
	op_rb(aa, bb);
	ft_putstr("rb\n");
	return (1);
}

int				merge_a_inner(t_lst **aa, t_lst **bb, int sz)
{
	int		ops;
	int		ii;
	int		jj;

	ii = 0;
	jj = 0;
	ops = 0;
	while (ii < sz && jj < sz)
	{
		if (ft_lstcmp_lli(*bb, *aa) < 0)
		{
			ops += merge_a_put(aa, bb);
			ii++;
		}
		else
		{
			ops += merge_a_rot(aa, bb);
			jj++;
		}
	}
	while (ii++ < sz)
		ops += merge_a_put(aa, bb);
	while (jj++ < sz)
		ops += merge_a_rot(aa, bb);
	return (ops);
}

int				merge_b_inner(t_lst **aa, t_lst **bb, int sz)
{
	int		ops;
	int		ii;
	int		jj;

	ii = 0;
	jj = 0;
	ops = 0;
	while (ii < sz && jj < sz)
	{
		if (ft_lstcmp_lli(*aa, *bb) < 0)
		{
			ops += merge_b_put(aa, bb);
			ii++;
		}
		else
		{
			ops += merge_b_rot(aa, bb);
			jj++;
		}
	}
	while (ii++ < sz)
		ops += merge_b_put(aa, bb);
	while (jj++ < sz)
		ops += merge_b_rot(aa, bb);
	return (ops);
}

int				merge_a_outer(t_lst **aa, t_lst **bb, int sz)
{
	int		ops;
	int		ii;

	ii = 0;
	ops = 0;
	while (ii < sz)
	{
		if (ft_lstcmp_lli(*bb, (*aa)->prv) > 0 && ft_lstcmp_lli(*bb, *aa) < 0)
		{
			ops += merge_a_put(aa, bb);
			ii++;
		}
		else
		{
			ops += merge_a_rot(aa, bb);
		}
	}
	return (ops);
}

int				merge_b_outer(t_lst **aa, t_lst **bb, int sz)
{
	int		ops;
	int		ii;

	ii = 0;
	ops = 0;
	while (ii < sz)
	{
		if (ft_lstcmp_lli(*aa, *bb) < 0)
		{
			ops += merge_b_put(aa, bb);
			ii++;
		}
		else
		{
			ops += merge_b_rot(aa, bb);
		}
	}
	return (ops);
}

int				push_pass(t_lst **aa, t_lst **bb)
{
	int		ops;
	int		sz;

	sz = ft_lstsz(*aa) / 2;
	ops = 0;
	while (sz--)
	{
		op_pb(aa, bb);
		ft_putstr("pb\n");
		ops++;
	}
	return (ops);
}

int				sort_tips(t_lst **aa, t_lst **bb)
{
	int		tip_a;
	int		tip_b;
	int		ops;

	tip_a = ft_lstsz(*aa) % 3;
	tip_b = ft_lstsz(*bb) % 3;
	ops = 0;
	if (3 == tip_a)
		ops += sort3_a(aa, bb);
	if (3 == tip_b)
		ops += sort3_b(aa, bb);
	if (2 == tip_a && 2 == tip_b)
		ops += sort2_ab(aa, bb);
	else if (2 == tip_a)
		ops += sort2_a(aa, bb);
	else if (2 == tip_b)
		ops += sort2_b(aa, bb);
	if (1 == tip_a && 1 == tip_b)
		ops += sort1_ab(aa, bb);
	else if (1 == tip_a)
		ops += sort1_a(aa, bb);
	else if (1 == tip_b)
		ops += sort1_b(aa, bb);
	return (ops);
}

int				sort_pass(t_lst **aa, t_lst **bb)
{
	int		ops;
	int		ii;
	int		jj;
	int		a_sz;
	int		b_sz;

	a_sz = ft_lstsz(*aa);
	b_sz = ft_lstsz(*bb);
	ii = 0;
	jj = 0;
	ops = 0;
	while (ii + 3 <= a_sz && jj + 3 <= b_sz)
	{
		ops += sort3_ab(aa, bb);
		ii += 3;
		jj += 3;
	}
	ops += sort_tips(aa, bb);
	return (ops);
}

int				merge_inner(t_lst **aa, t_lst **bb, int sz)
{
	int		inner_sz;
	int		ops;
	t_bool	lever;

	ops = 0;
	inner_sz = MIN(ft_lstsz(*aa) / sz, ft_lstsz(*bb) / sz);
	lever = inner_sz == 1;
	while (inner_sz-- > 0)
	{
		if (0 == lever)
		{
			ops += merge_b_inner(aa, bb, sz);
			lever = 1;
		}
		else if (1 == lever)
		{
			ops += merge_a_inner(aa, bb, sz);
			lever = 0;
		}
	}
	return (ops);
}

int				merge_outer(t_lst **aa, t_lst **bb, int sz)
{
	int		a_outer_sz;
	int		ops;

	ops = 0;
	a_outer_sz = ft_lstsz(*aa) % (sz * 2);
	ops += merge_b_inner(aa, bb, a_outer_sz);
	return (ops);
}

int				merge_pass(t_lst **aa, t_lst **bb)
{
	int		ops;
	int		sz;

	ops = 0;
	sz = 3;
	while (sz <= ft_lstsz(*aa) && sz <= ft_lstsz(*bb))
	{
		ops += merge_inner(aa, bb, sz);
		ops += merge_outer(aa, bb, sz);
		sz *= 2;
	}
	while (ft_lstsz(*bb) > 0)
	{
		ops += merge_a_outer(aa, bb, 1);
	}
	return (ops);
}

int				rot_pass(t_lst **aa, t_lst **bb)
{
	int			ops;
	t_lst		*min;

	ops = 0;
	min = ft_lstmin(*aa, ft_lstcmp_lli);
	while (min != *aa)
	{
		op_rra(aa, bb);
		ft_putstr("rra\n");
		ops++;
	}
	return (ops);
}

int				msort(t_lst **aa, t_lst **bb)
{
	int		ops;

	ops = 0;
	ops += push_pass(aa, bb);
	ops += sort_pass(aa, bb);
	ops += merge_pass(aa, bb);
	ops += rot_pass(aa, bb);
	return (ops);
}

int				sort(t_lst **aa, t_lst **bb)
{
	int		sz;

	if (NULL == aa || NULL == *aa)
		return (0);
	sz = ft_lstsz(*aa);
	if (1 == sz || 0 == sz)
		return (0);
	if (2 == sz)
		return (sort2_a_small(aa, bb));
	if (3 == sz)
		return (sort3_a_small(aa, bb));
	return (msort(aa, bb));
}
