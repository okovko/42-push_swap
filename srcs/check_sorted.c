/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sorted.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/07 13:39:21 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/07 16:54:56 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_bool		check_sorted(t_lst *ll)
{
	int			cur_val;
	int			nxt_val;
	t_lst		*beg;

	beg = ll;
	while (true)
	{
		cur_val = *(int *)ll->dat;
		ll = ll->nxt;
		nxt_val = *(int *)ll->dat;
		if (beg == ll)
			break ;
		if (cur_val > nxt_val)
			return (false);
	}
	return (true);
}
