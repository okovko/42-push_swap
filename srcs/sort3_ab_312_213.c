/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort3_ab_312_213.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/13 00:37:55 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/20 18:48:37 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int				sort3_ab_312_213(t_lst **aa, t_lst **bb)
{
	(void)"312.. 213..";
	op_ss(aa, bb);
	(void)"132.. 123..";
	op_rr(aa, bb);
	(void)"32..1 23..1";
	op_sa(aa, bb);
	(void)"23..1 23..1";
	op_rr(aa, bb);
	op_rr(aa, bb);
	ft_putstr("ss\n");
	ft_putstr("rr\n");
	ft_putstr("sa\n");
	ft_putstr("rr\n");
	ft_putstr("rr\n");
	return (5);
}
