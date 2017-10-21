/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort3_ab_123_231.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/12 21:46:32 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/20 16:57:08 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int				sort3_ab_123_231(t_lst **aa, t_lst **bb)
{
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
	ft_putstr("pa\n");
	ft_putstr("ss\n");
	ft_putstr("rr\n");
	ft_putstr("pb\n");
	ft_putstr("rr\n");
	ft_putstr("rr\n");
	return (6);
}
