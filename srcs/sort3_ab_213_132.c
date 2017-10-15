/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort3_ab_213_132.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/13 00:02:11 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/13 00:02:11 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int				sort3_ab_213_132(t_lst **aa, t_lst **bb)
{
	(void)"213.. 132..";
	op_sa(aa, bb);
	(void)"123.. 132..";
	op_rr(aa, bb);
	(void)"23..1 32..1";
	op_sb(aa, bb);
	(void)"23..1 23..1";
	op_rr(aa, bb);
	(void)"3..12 3..12";
	op_rr(aa, bb);
	(void)"..123 ..123";
	ft_putstr("sa\n");
	ft_putstr("rr\n");
	ft_putstr("sb\n");
	ft_putstr("rr\n");
	ft_putstr("rr\n");
	return (5);
}
