/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_range.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/07 13:38:35 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/07 17:25:38 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_bool		check_range(t_lst *nod)
{
	long long	val;
	long long	imin;
	long long	imax;

	if (NULL == nod)
		return (true);
	imin = (int)(~(~0u >> 1));
	imax = (int)(~0u >> 1);
	val = *(long long *)nod->dat;
	if (val < imin || val > imax)
		return (false);
	return (true);
}
