/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort3_ab_132_213.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/12 22:47:50 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/20 17:05:56 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int				sort3_ab_132_213(t_lst **aa, t_lst **bb)
{
	(void)"132.. 213..";
	op_sb(aa, bb);
	(void)"132.. 123..";
	op_rr(aa, bb);
	(void)"32..1 23..1";
	op_sa(aa, bb);
	(void)"23..1 23..1";
	op_rr(aa, bb);
	op_rr(aa, bb);
	ft_putstr("sb\n");
	ft_putstr("rr\n");
	ft_putstr("sa\n");
	ft_putstr("rr\n");
	ft_putstr("rr\n");
	return (5);
}
