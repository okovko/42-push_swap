/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/07 13:40:57 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/07 13:40:57 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int			rot_sort(t_lst **ll)
{
	int		ii;
	t_lst	*beg;
	t_lst	*min;
	t_lst	*max;
	t_bool	unsorted;

	beg = *ll;
	min = ft_lstmin(*ll, ft_lstcmp_lli);
	max = ft_lstmax(*ll, ft_lstcmp_lli);
	ii = 0;
	while (true)
	{
		unsorted = ft_lstcmp_lli(*ll, (*ll)->nxt) > 0
			&& *ll != max && (*ll)->nxt != min;
		if (unsorted)
		{
			op_sa(ll, NULL);
			op_ra(ll, NULL);
			ii += 2;
		}
		*ll = (*ll)->nxt;
		if (beg == *ll && false == unsorted)
			break ;
	}
	return (ii);
}
