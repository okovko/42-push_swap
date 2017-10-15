/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   merge.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/08 15:45:17 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/15 03:33:36 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * sort pass works, just make sure merge pass works, should be good then
 */

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

int				merge_a(t_lst **aa, t_lst **bb, int sz)
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
			ops += merge_a_helper(aa, bb);
			ii++;
		}
		else
		{
			op_ra(aa, bb);
			ft_putstr("ra\n");
			ops++;
			jj++;
		}
	}
	while (ii++ < sz)
		ops += merge_a_helper(aa, bb);
	return (ops);
}

int				merge_b(t_lst **aa, t_lst **bb, int sz)
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
			ops += merge_b_helper(aa, bb);
			ii++;
		}
		else
		{
			op_rb(aa, bb);
			ft_putstr("rb\n");
			ops++;
			jj++;
		}
	}
	while (ii++ < sz)
		ops += merge_b_helper(aa, bb);
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

int				merge_pass(t_lst **aa, t_lst **bb)
{
	int		ops;
	int		ii;
	int		jj;
	int		sz;
	t_bool	merge_to_a;

	merge_to_a = true;
	ops = 0;
	sz = 3;
	while (sz <= ft_lstsz(*aa) && sz <= ft_lstsz(*bb))
	{
		ii = 0;
		jj = 0;
		while (ii + sz <= ft_lstsz(*aa) && jj + sz <= ft_lstsz(*bb))
		{
			if (merge_to_a)
			{
				ops += merge_a(aa, bb, sz);
				merge_to_a = false;
			}
			else
			{
				merge_to_a = true;
				ops += merge_b(aa, bb, sz);
			}
			ii += sz;
			jj += sz;
		}
		ops += merge_b(aa, bb, sz + ft_lstsz(*aa) % sz);
		sz *= 2;
	}
	ops += merge_a(aa, bb, ft_lstsz(*bb));
	return (ops);
}

int				msort(t_lst **aa, t_lst **bb)
{
	int		ops;

	ops = 0;
	ops += push_pass(aa, bb);
	ops += sort_pass(aa, bb);
	ops += merge_pass(aa, bb);
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
