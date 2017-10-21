/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort3_a_312.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/15 03:45:55 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/20 20:17:14 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int				sort3_a_312(t_lst **aa, t_lst **bb)
{
	op_sa(aa, bb);
	op_ra(aa, bb);
	op_sa(aa, bb);
	op_ra(aa, bb);
	op_ra(aa, bb);
	ft_putstr("sa\n");
	ft_putstr("ra\n");
	ft_putstr("sa\n");
	ft_putstr("ra\n");
	ft_putstr("ra\n");
	return (5);
}
