/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/07 13:40:41 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/07 13:40:41 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_bool		check(int ac, char **av)
{
	t_lst	*vals;
	t_lst	*ops;
	char	*edg;
	t_bool	valid;
	
	valid = false;
	vals = parse_vals(ac, av, &edg);
	ops = NULL;
	if ('\0' != *edg)
		ft_putstr_fd("Error\n", 2);
	if ('\0' == *edg && check_range(vals) && check_dupe(vals))
	{
		ops = parse_ops();
		//fprintf(stderr, "parsed all ops\n");
		//dbg_print(ops);
		valid = check_ops(vals, ops);
	}
	ft_lstnfree(&vals, 1);
	ft_lstnfree(&ops, 1);
	return (valid);
}
