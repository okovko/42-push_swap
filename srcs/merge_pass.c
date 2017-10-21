/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   merge_pass.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/20 10:51:06 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/20 19:25:39 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
		ops += merge_a_outer(aa, bb, 1);
	return (ops);
}
