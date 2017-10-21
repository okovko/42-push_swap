/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort3_ab_321_132.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/13 00:45:33 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/20 18:55:25 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int				sort3_ab_321_132(t_lst **aa, t_lst **bb)
{
	(void)"321.. 132..";
	op_sa(aa, bb);
	(void)"132.. 312..";
	op_ra(aa, bb);
	(void)"32..1 312..";
	op_ss(aa, bb);
	(void)"23..1 132..";
	op_rb(aa, bb);
	(void)"23..1 32..1";
	op_sb(aa, bb);
	(void)"23..1 23..1";
	op_rr(aa, bb);
	op_rr(aa, bb);
	ft_putstr("sa\n");
	ft_putstr("ra\n");
	ft_putstr("ss\n");
	ft_putstr("rb\n");
	ft_putstr("sb\n");
	ft_putstr("rr\n");
	ft_putstr("rr\n");
	return (7);
}
