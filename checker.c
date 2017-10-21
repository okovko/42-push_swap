/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 21:33:31 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/20 13:11:54 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int			main(int ac, char **av)
{
	t_lst	*vals;
	t_lst	*ops;

	vals = NULL;
	ops = NULL;
	if (false == parse_vals(ac, av, &vals)
			|| false == ft_lstp_each(vals, check_range)
			|| false == ft_lstp_uniq(vals, ft_lstcmp_lli))
		ft_putstr_fd("Error\n", 2);
	else if (false == parse_ops(&ops))
		ft_putstr_fd("Error\n", 2);
	else if (false == check_ops(vals, ops))
		ft_putstr("KO\n");
	else
		ft_putstr("OK\n");
	//dbg_print(vals);
	ft_lstnfree(&vals, 1);
	ft_lstnfree(&ops, 1);
	return (0);
}
