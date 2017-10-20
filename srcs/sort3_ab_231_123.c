/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort3_ab_231_123.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/13 00:24:24 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/20 11:54:43 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int				sort3_ab_231_123(t_lst **aa, t_lst **bb)
{
	(void)"231.. 123..";
	op_rr(aa, bb);
	(void)"31..2 23..1";
	op_sa(aa, bb);
	(void)"13..2 23..1";
	op_rrr(aa, bb);
	(void)"213.. 123..";
	op_sa(aa, bb);
	(void)"123.. 123..";
	ft_putstr("rr\n");
	ft_putstr("sa\n");
	ft_putstr("rrr\n");
	ft_putstr("sa\n");
	return (4 + sort3_ab_123_123(aa, bb));
}
