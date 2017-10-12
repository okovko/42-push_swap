/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   merge.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/08 15:45:17 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/11 17:05:44 by olkovale         ###   ########.fr       */
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
	if (ft_lstcmp_lli(*aa, *bb) < 0)
	{
		ops += merge_a_helper(aa, bb);
		b_sz--;
	}
	while (a_sz-- > 0)
	{
		if (NULL != *bb && ft_lstcmp_lli(*bb, *aa) < 0)
		{
			ops += merge_a_helper(aa, bb);
			b_sz--;
		}
		else
		{
			op_ra(aa, bb);
			ft_putstr("ra\n");
			ops++;
		}
	}
	op_ra(aa, bb);
	ft_putstr("ra\n");
	if (b_sz-- > 0)
		ops += merge_a_helper(aa, bb);
	return (ops);
}

int				merge_b(t_lst **aa, t_lst **bb, int a_sz, int b_sz)
{
	int		ops;

	ops = 0;
	if (ft_lstcmp_lli(*aa, *bb) < 0)
	{
		ops += merge_b_helper(aa, bb);
		b_sz--;
	}
	while (a_sz-- > 0)
	{
		if (NULL != *bb && ft_lstcmp_lli(*bb, *aa) < 0)
		{
			ops += merge_b_helper(aa, bb);
			b_sz--;
		}
		else
		{
			op_rb(aa, bb);
			ft_putstr("rb\n");
			ops++;
		}
	}
	op_rb(aa, bb);
	ft_putstr("rb\n");
	if (b_sz-- > 0)
		ops += merge_b_helper(aa, bb);
	return (ops);
}

int				base_case(t_lst **aa, t_lst **bb, int which)
{
	if ('a' == which && ft_lstcmp_lli(*aa, (*aa)->nxt) > 0)
	{
		op_sa(aa, bb);
		ft_putstr("sa\n");
	}
	if ('b' == which && ft_lstcmp_lli(*bb, (*bb)->nxt) > 0)
	{
		op_sb(aa, bb);
		ft_putstr("sb\n");
	}
	return (1);
}

int				push_other(t_lst **aa, t_lst **bb, int sz, int which)
{
	int		ops;

	ops = 0;
	if ('a' == which)
	{
		while (sz--)
		{
			op_pb(aa, bb);
			ft_putstr("pb\n");
			ops++;
		}
	}
	else if ('b' == which)
	{
		while (sz--)
		{
			op_pa(aa, bb);
			ft_putstr("pa\n");
			ops++;
		}
	}
	return (ops);
}

int				msort(t_lst **aa, t_lst **bb, int sz, int which)
{
	int		other;
	int		aa_sz;
	int		bb_sz;
	int		ops;

	if (1 == sz)
		return (0);
	if (2 == sz)
		return (base_case(aa, bb, which));
	other = 'a' == which ? 'b' : 'a';
	bb_sz = sz / 2;
	aa_sz = sz - bb_sz;
	ops = 0;
	ops += push_other(aa, bb, 'a' == which ? bb_sz : aa_sz, which);
	ops += msort(aa, bb, aa_sz, which);
	ops += msort(aa, bb, bb_sz, other);
	if ('a' == which)
		ops += merge_a(aa, bb, aa_sz, bb_sz);
	else if ('b' == which)
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
	else
	{
		return (0);
	}
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

	sz = ft_lstsz(*aa);
	if (1 == sz || 0 == sz)
		return (0);
	if (2 == sz)
		return (sort2(aa, bb));
	if (3 == sz)
		return (sort3(aa, bb));
	else
		return (msort(aa, bb, sz, 'a'));
}
