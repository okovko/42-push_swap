/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort2_b.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/13 03:32:42 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/20 20:33:54 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int				sort2_b(t_lst **aa, t_lst **bb)
{
	int		cmp_b;
	int		ops;

	ops = 0;
	cmp_b = ft_lstcmp_lli(*bb, (*bb)->nxt);
	if (cmp_b > 0)
	{
		op_sb(aa, bb);
		ft_putstr("sb\n");
		ops++;
	}
	op_rb(aa, bb);
	op_rb(aa, bb);
	ft_putstr("rb\n");
	ft_putstr("rb\n");
	ops += 2;
	return (ops);
}
