/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   merge_a_put.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/20 10:48:16 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/20 10:48:16 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int				merge_a_put(t_lst **aa, t_lst **bb)
{
	op_pa(aa, bb);
	ft_putstr("pa\n");
	op_ra(aa, bb);
	ft_putstr("ra\n");
	return (2);
}
