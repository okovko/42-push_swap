/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_pass.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/20 10:51:15 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/20 20:34:35 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int				rot_pass(t_lst **aa, t_lst **bb)
{
	int			ops;
	t_lst		*min;

	ops = 0;
	min = ft_lstmin(*aa, ft_lstcmp_lli);
	while (min != *aa)
	{
		op_rra(aa, bb);
		ft_putstr("rra\n");
		ops++;
	}
	return (ops);
}
