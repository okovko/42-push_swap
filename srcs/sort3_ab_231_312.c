/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort3_ab_231_312.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/13 00:34:42 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/20 18:37:36 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int				sort3_ab_231_312(t_lst **aa, t_lst **bb)
{
	(void)"231.. 312..";
	op_sb(aa, bb);
	(void)"231.. 132..";
	op_rr(aa, bb);
	(void)"31..2 32..1";
	op_ss(aa, bb);
	(void)"13..2 23..1";
	op_rrr(aa, bb);
	(void)"213.. 123..";
	op_sa(aa, bb);
	(void)"123.. 123..";
	op_rr(aa, bb);
	op_rr(aa, bb);
	op_rr(aa, bb);
	ft_putstr("sb\n");
	ft_putstr("rr\n");
	ft_putstr("ss\n");
	ft_putstr("rrr\n");
	ft_putstr("sa\n");
	ft_putstr("rr\n");
	ft_putstr("rr\n");
	ft_putstr("rr\n");
	return (8);
}
