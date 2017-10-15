/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort3_a_132.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/15 03:40:33 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/15 03:40:33 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int				sort3_a_132(t_lst **aa, t_lst **bb)
{
	op_ra(aa, bb);
	op_sa(aa, bb);
	op_ra(aa, bb);
	op_ra(aa, bb);
	ft_putstr("ra\n");
	ft_putstr("sa\n");
	ft_putstr("ra\n");
	ft_putstr("ra\n");
	return (4);
}
