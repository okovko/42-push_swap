/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpop.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/06 16:30:31 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/08 20:11:57 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_lst	*ft_lstpop(t_lst **ll)
{
	t_lst	*nod;
	
	if (NULL == ll || NULL == *ll)
		return (NULL);
	if (*ll == (*ll)->nxt)
	{
		nod = *ll;
		*ll = NULL;
		return (nod);
	}
	(*ll)->nxt->prv = (*ll)->prv;
	(*ll)->prv->nxt = (*ll)->nxt;
	nod = *ll;
	*ll = (*ll)->nxt;
	nod->prv = nod;
	nod->nxt = nod;
	return (nod);
}
