/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort3_ab_123_231.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/12 21:46:32 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/12 21:46:32 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int				sort3_ab_123_231(t_lst **aa, t_lst **bb)
{
	(void)"123.. 231..";
	op_rr(aa, bb);
	(void)"23..1 31..2";
	op_sb(aa, bb);
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
	ft_putstr("rr\n");
	ft_putstr("sb\n");
	ft_putstr("rrr\n");
	ft_putstr("sb\n");
	ft_putstr("rr\n");
	ft_putstr("rr\n");
	ft_putstr("rr\n");
	return (7);
}
