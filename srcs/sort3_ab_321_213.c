/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort3_ab_321_213.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/13 00:48:39 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/20 18:56:53 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int				sort3_ab_321_213(t_lst **aa, t_lst **bb)
{
	(void)"321.. 213..";
	op_ss(aa, bb);
	(void)"231.. 123..";
	op_pb(aa, bb);
	(void)"31.. 2123..";
	op_ss(aa, bb);
	(void)"13.. 1223..";
	op_rr(aa, bb);
	(void)"3..1 223..1";
	op_pa(aa, bb);
	(void)"23..1 23..1";
	op_rr(aa, bb);
	op_rr(aa, bb);
	ft_putstr("ss\n");
	ft_putstr("pb\n");
	ft_putstr("ss\n");
	ft_putstr("rr\n");
	ft_putstr("pa\n");
	ft_putstr("rr\n");
	ft_putstr("rr\n");
	return (7);
}
