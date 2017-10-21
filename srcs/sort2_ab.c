/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort2_ab.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/13 02:23:32 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/20 20:34:15 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int		rot2_ab(t_lst **aa, t_lst **bb)
{
	op_rr(aa, bb);
	op_rr(aa, bb);
	ft_putstr("rr\n");
	ft_putstr("rr\n");
	return (2);
}

int				sort2_ab(t_lst **aa, t_lst **bb)
{
	int		cmp_a;
	int		cmp_b;

	cmp_a = ft_lstcmp_lli(*aa, (*aa)->nxt);
	cmp_b = ft_lstcmp_lli(*bb, (*bb)->nxt);
	if (cmp_a < 0 && cmp_b > 0)
	{
		op_sb(aa, bb);
		ft_putstr("sb\n");
	}
	if (cmp_a > 0 && cmp_b < 0)
	{
		op_sa(aa, bb);
		ft_putstr("sa\n");
	}
	if (cmp_a > 0 && cmp_b > 0)
	{
		op_ss(aa, bb);
		ft_putstr("ss\n");
	}
	rot2_ab(aa, bb);
	return (3);
}
