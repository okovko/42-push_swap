/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   merge_b_inner.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/20 10:49:28 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/20 10:49:28 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
