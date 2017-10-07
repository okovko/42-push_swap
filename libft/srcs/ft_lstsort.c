/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/06 18:02:14 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/06 18:02:14 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_lst	*ft_lstsort(t_lst *ll, int (*cmp)(t_lst *a, t_lst *b))
{
	t_lst	*beg;
	t_lst	*lft;
	t_lst	*rgt;
	t_bool	unsorted;

	if (NULL == ll || NULL == cmp)
		return (NULL);
	beg = ll;
	lft = ll;
	rgt = ll->nxt;
	if (lft == rgt)
		return (ll);
	unsorted = false;
	while (true)
	{
		if ((unsorted = (cmp(lft, rgt) > 0)))
			ft_lstadd(&lft, ft_lstpop(&rgt));
		ll = ll->nxt;
		if (ll == beg && false == unsorted)
			return (ll);
		lft = ll;
		rgt = ll->nxt;
	}
	return (ll);
}
