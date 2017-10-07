/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstp_rot_sorted.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/06 18:24:40 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/07 13:43:31 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_bool		ft_lstp_rot_sorted(t_lst *ll, int (*cmp)(t_lst *a, t_lst *b))
{
	int		max;
	t_lst	*beg;
	t_lst	*lft;
	t_lst	*rgt;

	if (NULL == ll || NULL == cmp)
		return (true);
	beg = ll;
	lft = ll;
	rgt = ll->nxt;
	if (lft == rgt)
		return (true);
	max = 0;
	while (true)
	{
		max = max == 0 && cmp(lft, rgt) > 0 ? cmp(lft, rgt) : max;
		if (cmp(lft, rgt) > 0 && max != cmp(lft, rgt))
			return (false);
		ll = ll->nxt;
		if (beg == ll)
			return (true);
		lft = ll;
		rgt = ll->nxt;
	}
	return (true);
}
