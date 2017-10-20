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

int				merge_a_outer(t_lst **aa, t_lst **bb, int sz)
{
	int		ops;
	int		ii;
	t_lst	*min;
	t_lst	*max;

	min = ft_lstmin2(ft_lstmin(*aa, ft_lstcmp_lli),
					 ft_lstmin(*bb, ft_lstcmp_lli), ft_lstcmp_lli);
	max = ft_lstmax2(ft_lstmax(*aa, ft_lstcmp_lli),
					 ft_lstmax(*bb, ft_lstcmp_lli), ft_lstcmp_lli);
	ii = 0;
	ops = 0;
	while (ii < sz)
	{
		if (min == *bb || max == *bb ||
			(ft_lstcmp_lli(*bb, (*aa)->prv) > 0 && ft_lstcmp_lli(*bb, *aa) < 0))
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
