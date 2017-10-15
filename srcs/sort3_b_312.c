/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort3_b_312.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/15 03:48:55 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/15 03:48:55 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int				sort3_b_312(t_lst **aa, t_lst **bb)
{
	op_sb(aa, bb);
	op_rb(aa, bb);
	op_sb(aa, bb);
	op_rb(aa, bb);
	op_rb(aa, bb);
	ft_putstr("sb\n");
	ft_putstr("rb\n");
	ft_putstr("sb\n");
	ft_putstr("rb\n");
	ft_putstr("rb\n");
	return (5);
}
