/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort3_ab_321_213.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/13 00:48:39 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/13 00:48:39 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int				sort3_ab_321_213(t_lst **aa, t_lst **bb)
{
	(void)"321.. 213..";
	op_sa(aa, bb);
	(void)"231.. 213..";
	ft_putstr("sa\n");
	return (1 + sort3_ab_231_213(aa, bb));
}
