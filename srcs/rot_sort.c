/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/07 13:40:57 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/07 16:32:02 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int			rot_sort(t_lst **ll)
{
	int		ii;
	t_lst	*beg;
	t_lst	*min;
	t_lst	*max;
	t_bool	swap;

	beg = *ll;
	min = ft_lstmin(*ll, ft_lstcmp_lli);
	max = ft_lstmax(*ll, ft_lstcmp_lli);
	ii = 0;
	while (true)
	{
		swap = ft_lstcmp_lli(*ll, (*ll)->nxt) > 0
			&& !(*ll == max && (*ll)->nxt == min);
		if (swap)
		{
			op_sa(ll, NULL);
			ft_putstr("sa\n");
			ii++;
		}
		op_ra(ll, NULL);
		ft_putstr("ra\n");
		ii++;
		if (true == ft_lstp_rot_sorted(min, ft_lstcmp_lli))
			break ;
	}
	return (ii);
}
