/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnode.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 16:37:46 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/05 19:46:36 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "libft.h"

t_lst	*ft_lstnode(void const *dat, int sz)
{
	t_lst	*nod;

	if (NULL == (nod = malloc(sizeof(t_lst))))
		return (NULL);
	nod->dat = (void *)dat;
	nod->sz = sz;
	nod->prv = NULL;
	nod->nxt = NULL;
	return (nod);
}
