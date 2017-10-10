/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmerge.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/08 15:54:50 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/09 15:51:40 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_lst	*ft_lstmerge(t_lst **into, t_lst **outof,
						int (*cmp)(t_lst *a, t_lst *b))
{
	t_lst	*lgt;
	t_lst	*glt;
	t_lst	*pop;

	while (NULL != *outof)
	{
		pop = ft_lstpop(outof);
		lgt = ft_lstlgt(*into, pop, cmp);
		glt = ft_lstglt(*into, pop, cmp);
		if (NULL != lgt)
			ft_lstadd(&lgt, pop);
		else if (NULL != glt)
			ft_lstadd(&glt->nxt, pop);
		else
			ft_lstadd(into, pop);
	}
	return (NULL);
}
