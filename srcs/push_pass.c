/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_pass.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/20 10:50:13 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/20 10:50:13 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
