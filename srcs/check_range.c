/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_range.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/07 13:38:35 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/07 13:38:35 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_bool		check_range(t_lst *ll)
{
	t_lst		*beg;
	long long	val;
	long long	imin;
	long long	imax;

	beg = ll;
	imin = (int)(~(~0u >> 1));
	imax = (int)(~0u >> 1);
	while (true)
	{
		val = *(long long *)ll->dat;
		if (val < imin || val > imax)
		{
			ft_putstr_fd("Error\n", 2);
			return (false);
		}
		ll = ll->nxt;
		if (beg == ll)
			break ;
	}
	return (true);
}
