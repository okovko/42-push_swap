/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort3_ab_213_312.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/13 00:07:44 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/20 17:16:42 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int				sort3_ab_213_312(t_lst **aa, t_lst **bb)
{
	(void)"213.. 312..";
	op_ss(aa, bb);
	(void)"123.. 132..";
	op_rb(aa, bb);
	(void)"123.. 32..1";
	op_sb(aa, bb);
	(void)"123.. 23..1";
	op_ra(aa, bb);
	(void)"23..1 23..1";
	op_rr(aa, bb);
	op_rr(aa, bb);
	ft_putstr("ss\n");
	ft_putstr("rb\n");
	ft_putstr("sb\n");
	ft_putstr("ra\n");
	ft_putstr("rr\n");
	ft_putstr("rr\n");
	return (6);
}
