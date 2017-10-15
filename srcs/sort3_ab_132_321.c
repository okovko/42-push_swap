/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort3_ab_132_321.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/12 23:58:52 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/12 23:58:52 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int				sort3_ab_132_321(t_lst **aa, t_lst **bb)
{
	(void)"132.. 321..";
	op_sb(aa, bb);
	(void)"132.. 231..";
	op_rr(aa, bb);
	(void)"32..1 31..2";
	op_ss(aa, bb);
	(void)"23..1 13..2";
	op_rrr(aa, bb);
	(void)"123.. 213..";
	op_sb(aa, bb);
	(void)"123.. 123..";
	op_rr(aa, bb);
	(void)"23..1 23..1";
	op_rr(aa, bb);
	(void)"3..12 3..12";
	op_rr(aa, bb);
	(void)"..123 ..123";
	ft_putstr("sb\n");
	ft_putstr("rr\n");
	ft_putstr("ss\n");
	ft_putstr("rrr\n");
	ft_putstr("sb\n");
	ft_putstr("rr\n");
	ft_putstr("rr\n");
	ft_putstr("rr\n");
	return (8);
}
