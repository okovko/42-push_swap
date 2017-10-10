/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpop.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/06 16:30:31 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/09 16:02:31 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_lst	*ft_lstpop(t_lst **ll)
{
	t_lst	*aa;
	t_lst	*bb;
	t_lst	*cc;
	
	if (NULL == ll || NULL == *ll)
		return (NULL);
	if (*ll == (*ll)->nxt)
	{
		bb = *ll;
		*ll = NULL;
		return (bb);
	}
	bb = *ll;
	aa = bb->prv;
	cc = bb->nxt;
	aa->nxt = cc;
	cc->prv = aa;
	*ll = cc;
	/*
	(*ll)->nxt->prv = (*ll)->prv;
	(*ll)->prv->nxt = (*ll)->nxt;
	*ll = (*ll)->nxt;
	*/
	bb->prv = bb;
	bb->nxt = bb;
	return (bb);
}
