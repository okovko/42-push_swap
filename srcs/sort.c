/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/07 13:41:14 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/07 13:41:14 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int			sort(t_lst **ll)
{
	int		ii;
	t_lst	*beg;
	t_lst	*min;

	beg = *ll;
	min = ft_lstmin(*ll, ft_lstcmp_lli);
	ii = rot_sort(ll);
	while (true)
	{
		if (min == *ll)
			break ;
		*ll = (*ll)->nxt;
		op_ra(ll, NULL);
		ii++;
	}
	return (ii);
}
