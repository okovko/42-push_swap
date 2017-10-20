/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   merge_a_outer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/20 10:49:38 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/20 10:49:38 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int		merge_a_min(t_lst **aa, t_lst **bb)
{
	int		ops;
	t_lst	*min;

	ops = 0;
	min = ft_lstmin2(ft_lstmin(*aa, ft_lstcmp_lli),
					ft_lstmin(*bb, ft_lstcmp_lli), ft_lstcmp_lli);
	if (min == *bb)
		ops += merge_a_put(aa, bb);
	return (ops);
}

static int		merge_a_max(t_lst **aa, t_lst **bb)
{
	int		ops;
	t_lst	*max;
	t_lst	*min;

	min = ft_lstmin2(ft_lstmin(*aa, ft_lstcmp_lli),
					ft_lstmin(*bb, ft_lstcmp_lli), ft_lstcmp_lli);
	max = ft_lstmax2(ft_lstmax(*aa, ft_lstcmp_lli),
					ft_lstmax(*bb, ft_lstcmp_lli), ft_lstcmp_lli);
	ops = 0;
	if (max == *bb && min == *aa)
		ops += merge_a_put(aa, bb);
	return (ops);
}

static int		merge_a_mid(t_lst **aa, t_lst **bb)
{
	int		ops;

	ops = 0;
	if (ft_lstcmp_lli(*bb, (*aa)->prv) > 0 && ft_lstcmp_lli(*bb, *aa) < 0)
		ops += merge_a_put(aa, bb);
	return (ops);
}

int				merge_a_outer(t_lst **aa, t_lst **bb, int sz)
{
	int		ops;
	int		ii;
	int		jj;

	(void)sz;
	ii = 0;
	jj = 0;
	ops = 0;
	ops += merge_a_min(aa, bb);
	ops += merge_a_mid(aa, bb);
	ops += merge_a_max(aa, bb);
	if (ops == 0)
	{
		ops += merge_a_rot(aa, bb);
		jj++;
	}
	return (ops);
}
