/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort3_ab_321_132.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/13 00:45:33 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/20 18:55:25 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int				sort3_ab_321_132(t_lst **aa, t_lst **bb)
{
	(void)"321.. 132..";
	op_pb(aa, bb);
	(void)"21.. 3132..";
	op_ss(aa, bb);
	(void)"12.. 1332..";
	op_rr(aa, bb);
	(void)"2..1 332..";
	op_pa(aa, bb);
	(void)"32..1 32..1";
	op_ss(aa, bb);
	(void)"23..1 23..1";
	op_rr(aa, bb);
	op_rr(aa, bb);
	ft_putstr("pb\n");
	ft_putstr("ss\n");
	ft_putstr("rr\n");
	ft_putstr("pa\n");
	ft_putstr("ss\n");
	ft_putstr("rr\n");
	ft_putstr("rr\n");
	return (7);
}
