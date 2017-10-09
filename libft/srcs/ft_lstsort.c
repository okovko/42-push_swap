/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/06 18:02:14 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/08 16:00:25 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_lst	*ft_lstsort(t_lst **ll, int (*cmp)(t_lst *a, t_lst *b))
{
	t_lst	*beg;
	t_lst	*itr;
	t_bool	swap;

	if (NULL == ll || NULL == *ll || NULL == cmp)
		return (NULL);
	beg = *ll;
	itr = beg;
	if (itr == itr->nxt)
		return (beg);
	swap = false;
	while (true)
	{
		if (cmp(itr, itr->nxt) > 0)
		{
			swap = true;
			ft_lstadd(&itr, ft_lstpop(&itr->nxt));
		}
		itr = itr->nxt;
		if (itr == beg && false == swap)
			break ;
		else
			swap = false;
	}
	return (beg);
}
