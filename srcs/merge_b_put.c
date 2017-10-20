/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   merge_b_put.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/20 10:48:42 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/20 10:48:42 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int				merge_b_put(t_lst **aa, t_lst **bb)
{
	op_pb(aa, bb);
	ft_putstr("pb\n");
	op_rb(aa, bb);
	ft_putstr("rb\n");
	return (2);
}
