/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/06 19:33:50 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/06 19:33:50 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_lstsz(t_lst *ll)
{
	int		sz;
	t_lst	*beg;
	t_lst	*lft;
	t_lst	*rgt;

	if (NULL == ll)
		return (0);
	beg = ll;
	lft = ll;
	rgt = ll->nxt;
	if (lft == rgt)
		return (1);
	sz = 0;
	while (true)
	{
		ll = ll->nxt;
		if (beg == ll)
			return (sz);
	}
}
