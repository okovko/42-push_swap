/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort3_b_213.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/15 03:49:49 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/15 03:49:49 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int				sort3_b_213(t_lst **aa, t_lst **bb)
{
	op_sb(aa, bb);
	op_rb(aa, bb);
	op_rb(aa, bb);
	op_rb(aa, bb);
	ft_putstr("sb\n");
	ft_putstr("rb\n");
	ft_putstr("rb\n");
	ft_putstr("rb\n");
	return (4);
}
