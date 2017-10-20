/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/08 15:45:17 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/20 10:51:41 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int				sort(t_lst **aa, t_lst **bb)
{
	int		sz;

	if (NULL == aa || NULL == *aa)
		return (0);
	sz = ft_lstsz(*aa);
	if (1 == sz || 0 == sz)
		return (0);
	if (2 == sz)
		return (sort2_a_small(aa, bb));
	if (3 == sz)
		return (sort3_a_small(aa, bb));
	return (msort(aa, bb));
}
