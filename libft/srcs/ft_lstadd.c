/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/18 08:15:03 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/05 19:44:43 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_lst	*ft_lstadd(t_lst **ll, t_lst *nod)
{
	if (NULL == ll)
	{
		nod->prv = nod;
		nod->nxt = nod;
		return (nod);
	}
	if (NULL == *ll)
	{
		nod->prv = nod;
		nod->nxt = nod;
		*ll = nod;
		return (*ll);
	}
	nod->prv = (*ll)->prv;
	nod->nxt = *ll;
	(*ll)->prv->nxt = nod;
	(*ll)->prv = nod;
	*ll = nod;
	return (*ll);
}
