/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_dupe.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/07 13:39:02 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/07 13:39:02 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_bool		check_dupe(t_lst *ll)
{
	t_lst		*beg_outer;
	t_lst		*beg_inner;
	t_lst		*inner;
	int			outer_val;
	int			inner_val;

	beg_outer = ll;
	while (beg_outer != ll->nxt)
	{
		outer_val = *(int *)ll->dat;
		ll = ll->nxt;
		inner = ll;
		beg_inner = inner;
		while (beg_inner != inner->nxt)
		{
			inner_val = *(int *)inner->dat;
			if (outer_val == inner_val)
			{
				ft_putstr_fd("Error\n", 2);
				return (false);
			}
			inner = inner->nxt;
		}
	}
	return (true);
}
