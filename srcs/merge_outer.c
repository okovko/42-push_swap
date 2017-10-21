/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   merge_outer.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/20 10:50:57 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/20 20:37:43 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int				merge_outer(t_lst **aa, t_lst **bb, int sz)
{
	int		ii;
	int		jj;
	int		a_outer_sz;
	int		b_outer_sz;
	int		ops;

	ops = 0;
	ii = 0;
	jj = 0;
	a_outer_sz = ft_lstsz(*aa) % (sz * 2);
	while (ii++ < a_outer_sz)
		ops += merge_b_put(aa, bb);
	b_outer_sz = ft_lstsz(*bb) % (sz * 2) - a_outer_sz;
	while (jj++ < b_outer_sz)
		ops += merge_b_rot(aa, bb);
	return (ops);
}
