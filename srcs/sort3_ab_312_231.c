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
	(void)"312.. 123..";
	op_sa(aa, bb);
	(void)"132.. 231..";
	op_pa(aa, bb);
	(void)"2132.. 31..";
	op_ss(aa, bb);
	(void)"1232.. 13..";
	op_rr(aa, bb);
	(void)"232..1 3..1";
	op_pb(aa, bb);
	(void)"23..1 23..1";
	op_rr(aa, bb);
	op_rr(aa, bb);
	ft_putstr("sa\n");
	ft_putstr("pa\n");
	ft_putstr("ss\n");
	ft_putstr("rr\n");
	ft_putstr("pb\n");
	ft_putstr("rr\n");
	ft_putstr("rr\n");
	return (7);
}
