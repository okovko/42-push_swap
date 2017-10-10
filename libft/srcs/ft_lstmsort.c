/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmsort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/09 22:16:39 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/10 00:53:55 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	t_lst	*msort(t_lst *itr, int (*cmp)(t_lst *a, t_lst *b))
{
	int		sz;
	t_lst	*l1;
	t_lst	*l2;
	
	sz = ft_lstsz(itr) / 2;
	if (0 == sz)
		return (itr);
	l1 = itr;
	while (sz--)
		itr = itr->nxt;
	l2 = itr;
	ft_lstsplit(l1, l2);
	msort(l1, cmp);
	msort(l2, cmp);
	return (ft_lstmerge(&l1, &l2, cmp));
}

t_lst			*ft_lstmsort(t_lst **ll, int (*cmp)(t_lst *a, t_lst *b))
{
	if (NULL == ll || NULL == *ll || NULL == cmp)
		return (NULL);
	if (*ll == (*ll)->nxt)
		return (*ll);
	return ((*ll = msort(*ll, cmp)));
}
