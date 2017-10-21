/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort3_ab_312_231.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/13 00:39:38 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/20 18:49:40 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int				sort3_ab_312_231(t_lst **aa, t_lst **bb)
{
	(void)"312.. 231..";
	op_sa(aa, bb);
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
	op_rr(aa, bb);
	op_rr(aa, bb);
	ft_putstr("sa\n");
	ft_putstr("rr\n");
	ft_putstr("ss\n");
	ft_putstr("rrr\n");
	ft_putstr("sb\n");
	ft_putstr("rr\n");
	ft_putstr("rr\n");
	ft_putstr("rr\n");
	return (8);
}
