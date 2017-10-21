/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   merge_inner.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/20 10:50:46 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/20 19:25:43 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
