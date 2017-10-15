/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort3_ab_132_312.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/12 23:56:26 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/12 23:56:26 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int				sort3_ab_132_312(t_lst **aa, t_lst **bb)
{
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
	(void)"3..12 3..12";
	op_rr(aa, bb);
	(void)"..123 ..123";
	ft_putstr("ra\n");
	ft_putstr("ss\n");
	ft_putstr("rb\n");
	ft_putstr("sb\n");
	ft_putstr("rr\n");
	ft_putstr("rr\n");
	return (6);
}
