/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort3_a_213.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/15 03:43:00 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/20 19:29:45 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int				sort3_a_213(t_lst **aa, t_lst **bb)
{
	op_sa(aa, bb);
	op_ra(aa, bb);
	op_ra(aa, bb);
	op_ra(aa, bb);
	ft_putstr("sa\n");
	ft_putstr("ra\n");
	ft_putstr("ra\n");
	ft_putstr("ra\n");
	return (4);
}
