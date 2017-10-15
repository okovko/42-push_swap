/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort2_a.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/13 03:31:27 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/15 03:52:29 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int				sort2_a(t_lst **aa, t_lst **bb)
{
	int		cmp_a;
	int		ops;

	ops = 0;
	cmp_a = ft_lstcmp_lli(*aa, (*aa)->nxt);
	if (cmp_a > 0)
	{
		op_sa(aa, bb);
		ft_putstr("sa\n");
		ops++;
	}
	op_ra(aa, bb);
	op_ra(aa, bb);
	ft_putstr("ra\n");
	ft_putstr("ra\n");
	ops += 2;
	return (ops);
}
