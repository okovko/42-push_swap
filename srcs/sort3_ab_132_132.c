/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort3_ab_132_132.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/12 22:46:59 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/20 17:05:45 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int				sort3_ab_132_132(t_lst **aa, t_lst **bb)
{
	(void)"132.. 132..";
	op_rr(aa, bb);
	(void)"32..1 32..1";
	op_ss(aa, bb);
	(void)"23..1 23..1";
	op_rr(aa, bb);
	op_rr(aa, bb);
	ft_putstr("rr\n");
	ft_putstr("ss\n");
	ft_putstr("rr\n");
	ft_putstr("rr\n");
	return (4);
}
