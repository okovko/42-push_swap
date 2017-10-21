/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort3_ab_213_231.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/13 00:04:02 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/20 17:14:42 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int				sort3_ab_213_231(t_lst **aa, t_lst **bb)
{
	(void)"213.. 231..";
	op_rb(aa, bb);
	(void)"213.. 31..2";
	op_sb(aa, bb);
	(void)"213.. 13..2";
	op_rrb(aa, bb);
	(void)"213.. 213..";
	op_ss(aa, bb);
	(void)"123.. 123..";
	op_rr(aa, bb);
	op_rr(aa, bb);
	op_rr(aa, bb);
	ft_putstr("rb\n");
	ft_putstr("sb\n");
	ft_putstr("rrb\n");
	ft_putstr("ss\n");
	ft_putstr("rr\n");
	ft_putstr("rr\n");
	ft_putstr("rr\n");
	return (7);
}
