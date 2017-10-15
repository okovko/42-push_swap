/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort3_a_321.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/15 03:46:41 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/15 03:46:41 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int				sort3_a_321(t_lst **aa, t_lst **bb)
{
	op_pb(aa, bb);
	op_sa(aa, bb);
	op_ra(aa, bb);
	op_ra(aa, bb);
	op_pa(aa, bb);
	op_ra(aa, bb);
	ft_putstr("pb\n");
	ft_putstr("sa\n");
	ft_putstr("ra\n");
	ft_putstr("ra\n");
	ft_putstr("pa\n");
	ft_putstr("ra\n");
	return (6);
}
