/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort3_ab_132_321.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/12 23:58:52 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/20 17:11:38 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int				sort3_ab_132_321(t_lst **aa, t_lst **bb)
{
	(void)"132.. 321..";
	op_pa(aa, bb);
	(void)"3132.. 21..";
	op_ss(aa, bb);
	(void)"1332.. 12..";
	op_rr(aa, bb);
	(void)"332..1 2..1";
	op_pa(aa, bb);
	(void)"32..1 32..1";
	op_rr(aa, bb);
	op_rr(aa, bb);
	ft_putstr("pa\n");
	ft_putstr("ss\n");
	ft_putstr("rr\n");
	ft_putstr("pa\n");
	ft_putstr("rr\n");
	ft_putstr("rr\n");
	return (6);
}
