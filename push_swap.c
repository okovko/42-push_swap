/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 17:29:22 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/11 23:44:20 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		main(int ac, char **av)
{
	int		op_sz;
	t_lst	*vals;
	t_lst	*aux;

	op_sz = 0;
	vals = NULL;
	if (false == parse_vals(ac, av, &vals)
		|| false == ft_lstp_each(vals, check_range)
		|| false == ft_lstp_uniq(vals, ft_lstcmp_lli))
	{
		ft_putstr_fd("Error\n", 2);
		ft_lstnfree(&vals, 1);
		return (-1);
	}
	op_sz = sort(&vals, &aux);
	dbg_print(vals);
	ft_putstr("ops: ");
	ft_putnbr(op_sz);
	ft_putstr("\n");
}
