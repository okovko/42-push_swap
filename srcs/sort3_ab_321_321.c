/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort3_ab_321_321.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/13 00:50:25 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/20 19:01:44 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int				sort3_ab_321_321(t_lst **aa, t_lst **bb)
{
	(void)"321.. 321..";
	op_ss(aa, bb);
	(void)"231.. 231..";
	op_rr(aa, bb);
	(void)"31..2 31..2";
	op_ss(aa, bb);
	(void)"13..2 13..2";
	op_rrr(aa, bb);
	(void)"213.. 213..";
	op_ss(aa, bb);
	(void)"123.. 123..";
	op_rr(aa, bb);
	op_rr(aa, bb);
	op_rr(aa, bb);
	ft_putstr("ss\n");
	ft_putstr("rr\n");
	ft_putstr("ss\n");
	ft_putstr("rrr\n");
	ft_putstr("ss\n");
	ft_putstr("rr\n");
	ft_putstr("rr\n");
	ft_putstr("rr\n");
	return (8);
}
