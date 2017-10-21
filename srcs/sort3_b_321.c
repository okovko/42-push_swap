/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort3_b_321.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/15 03:48:29 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/20 20:32:41 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int				sort3_b_321(t_lst **aa, t_lst **bb)
{
	op_pa(aa, bb);
	op_sb(aa, bb);
	op_rb(aa, bb);
	op_rb(aa, bb);
	op_pb(aa, bb);
	op_rb(aa, bb);
	ft_putstr("pa\n");
	ft_putstr("sb\n");
	ft_putstr("rb\n");
	ft_putstr("rb\n");
	ft_putstr("pb\n");
	ft_putstr("rb\n");
	return (6);
}
