/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort3_ab_321_312.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/13 00:50:03 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/13 00:50:03 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int				sort3_ab_321_312(t_lst **aa, t_lst **bb)
{
	(void)"321.. 312..";
	op_sa(aa, bb);
	(void)"231.. 312..";
	ft_putstr("sa\n");
	return (1 + sort3_ab_231_312(aa, bb));
}
