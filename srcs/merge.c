/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   merge.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/08 15:45:17 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/11 23:23:49 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int				merge_a_helper(t_lst **aa, t_lst **bb)
{
	op_pa(aa, bb);
	ft_putstr("pa\n");
	op_ra(aa, bb);
	ft_putstr("ra\n");
	return (2);
}

int				merge_b_helper(t_lst **aa, t_lst **bb)
{
	op_pb(aa, bb);
	ft_putstr("pb\n");
	op_rb(aa, bb);
	ft_putstr("rb\n");
	return (2);
}

int				merge_a(t_lst **aa, t_lst **bb, int a_sz, int b_sz)
{
	int		ops;

	ops = 0;
	while (a_sz > 0)
	{
		if (b_sz > 0 && ft_lstcmp_lli(*bb, *aa) < 0)
		{
			ops += merge_a_helper(aa, bb);
			b_sz--;
		}
		else
		{
			a_sz--;
			op_ra(aa, bb);
			ft_putstr("ra\n");
			ops++;
		}
	}
	while (b_sz-- > 0)
		ops += merge_a_helper(aa, bb);
	return (ops);
}

int				merge_b(t_lst **aa, t_lst **bb, int a_sz, int b_sz)
{
	int		ops;

	ops = 0;
	while (b_sz > 0)
	{
		if (a_sz > 0 && ft_lstcmp_lli(*aa, *bb) < 0)
		{
			ops += merge_b_helper(aa, bb);
			a_sz--;
		}
		else
		{
			b_sz--;
			op_rb(aa, bb);
			ft_putstr("rb\n");
			ops++;
		}
	}
	while (a_sz-- > 0)
		ops += merge_b_helper(aa, bb);
	return (ops);
}

int				base_case_a(t_lst **aa, t_lst **bb)
{
	if (ft_lstcmp_lli(*aa, (*aa)->nxt) > 0)
	{
		op_sa(aa, bb);
		ft_putstr("sa\n");
	}
	return (1);
}

int				base_case_b(t_lst **aa, t_lst **bb)
{
	if (ft_lstcmp_lli(*bb, (*bb)->nxt) > 0)
	{
		op_sb(aa, bb);
		ft_putstr("sb\n");
	}
	return (1);
}

int				push_a(t_lst **aa, t_lst **bb, int sz)
{
	int		ops;

	ops = 0;
	while (sz--)
	{
		op_pa(aa, bb);
		ft_putstr("pa\n");
		ops++;
	}
	return (ops);
}

int				push_b(t_lst **aa, t_lst **bb, int sz)
{
	int		ops;

	ops = 0;
	while (sz--)
	{
		op_pb(aa, bb);
		ft_putstr("pb\n");
		ops++;
	}
	return (ops);
}

int				msort_a(t_lst **aa, t_lst **bb, int sz)
{
	int		aa_sz;
	int		bb_sz;
	int		ops;

	if (1 == sz)
		return (0);
	if (2 == sz)
		return (base_case_a(aa, bb));
	bb_sz = sz / 2;
	aa_sz = sz - bb_sz;
	ops = 0;
	ops += push_b(aa, bb, bb_sz);
	ops += msort_a(aa, bb, aa_sz);
	ops += msort_b(aa, bb, bb_sz);
	ops += merge_a(aa, bb, aa_sz, bb_sz);
	return (ops);
}

int				msort_b(t_lst **aa, t_lst **bb, int sz)
{
	int		aa_sz;
	int		bb_sz;
	int		ops;

	if (1 == sz)
		return (0);
	if (2 == sz)
		return (base_case_b(aa, bb));
	aa_sz = sz / 2;
	bb_sz = sz - aa_sz;
	ops = 0;
	ops += push_a(aa, bb, aa_sz);
	ops += msort_b(aa, bb, bb_sz);
	ops += msort_a(aa, bb, aa_sz);
	ops += merge_b(aa, bb, aa_sz, bb_sz);
	return (ops);
}

int				sort2(t_lst **aa, t_lst **bb)
{
	if (ft_lstcmp_lli(*aa, (*aa)->nxt) > 0)
	{
		op_ra(aa, bb);
		ft_putstr("ra\n");
		return (1);
	}
	return (0);
}

int				sort3_case1(t_lst **aa, t_lst **bb)
{
	(void)aa;
	(void)bb;
	return (0);
}

int				sort3_case2(t_lst **aa, t_lst **bb)
{
	op_rra(aa, bb);
	op_sa(aa, bb);
	ft_putstr("rra\n");
	ft_putstr("sa\n");
	return (2);
}

int				sort3_case3(t_lst **aa, t_lst **bb)
{
	op_rra(aa, bb);
	ft_putstr("rra\n");
	return (1);
}

int				sort3_case4(t_lst **aa, t_lst **bb)
{
	op_sa(aa, bb);
	ft_putstr("sa\n");
	return (1);
}

int				sort3_case5(t_lst **aa, t_lst **bb)
{
	op_ra(aa, bb);
	ft_putstr("ra\n");
	return (1);
}

int				sort3_case6(t_lst **aa, t_lst **bb)
{
	op_ra(aa, bb);
	op_sa(aa, bb);
	ft_putstr("ra\n");
	ft_putstr("sa\n");
	return (2);
}

int				sort3(t_lst **aa, t_lst **bb)
{
	int		cmp1;
	int		cmp2;

	cmp1 = ft_lstcmp_lli(*aa, (*aa)->nxt);
	cmp2 = ft_lstcmp_lli((*aa)->nxt, (*aa)->nxt->nxt);
	if (cmp1 < 0 && cmp2 < 0)
		return (sort3_case1(aa, bb));
	if (cmp1 < 0 && cmp2 > 0 && ABS(cmp1) > ABS(cmp2))
		return (sort3_case2(aa, bb));
	if (cmp1 < 0 && cmp2 > 0 && ABS(cmp1) < ABS(cmp2))
		return (sort3_case3(aa, bb));
	if (cmp1 > 0 && cmp2 < 0 && ABS(cmp1) < ABS(cmp2))
		return (sort3_case4(aa, bb));
	if (cmp1 > 0 && cmp2 < 0 && ABS(cmp1) > ABS(cmp2))
		return (sort3_case5(aa, bb));
	if (cmp1 > 0 && cmp2 > 0)
		return (sort3_case6(aa, bb));
	return (0);
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
		return (sort2(aa, bb));
	if (3 == sz)
		return (sort3(aa, bb));
	return (msort_a(aa, bb, sz));
}
