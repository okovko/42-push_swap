/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort3_ab_123_321.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/12 21:57:15 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/20 16:59:32 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int				sort3_ab_123_321(t_lst **aa, t_lst **bb)
{
	(void)"123.. 321..";
	op_pa(aa, bb);
	(void)"3123.. 21..";
	op_ss(aa, bb);
	(void)"1323.. 12..";
	op_rr(aa, bb);
	(void)"323..1 2..1";
	op_pb(aa, bb);
	(void)"23..1 32..1";
	op_sb(aa, bb);
	(void)"23..1 23..1";
	op_rr(aa, bb);
	op_rr(aa, bb);
	ft_putstr("pa\n");
	ft_putstr("ss\n");
	ft_putstr("rr\n");
	ft_putstr("pb\n");
	ft_putstr("sb\n");
	ft_putstr("rr\n");
	ft_putstr("rr\n");
	return (7);
}
