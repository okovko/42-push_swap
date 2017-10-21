/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort3_ab_213_321.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/13 00:08:52 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/20 17:17:29 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int				sort3_ab_213_321(t_lst **aa, t_lst **bb)
{
	(void)"213.. 321..";
	op_ss(aa, bb);
	(void)"123.. 231..";
	op_pa(aa, bb);
	(void)"2123.. 31..";
	op_ss(aa, bb);
	(void)"1223.. 13..";
	op_rr(aa, bb);
	(void)"223..1 3..1";
	op_pb(aa, bb);
	(void)"23..1 23..1";
	op_rr(aa, bb);
	op_rr(aa, bb);
	ft_putstr("ss\n");
	ft_putstr("pa\n");
	ft_putstr("ss\n");
	ft_putstr("rr\n");
	ft_putstr("pb\n");
	ft_putstr("rr\n");
	ft_putstr("rr\n");
	return (7);
}
