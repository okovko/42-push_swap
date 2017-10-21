/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort3_a_small.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/12 20:19:38 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/20 20:17:29 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int				sort3_a_small(t_lst **aa, t_lst **bb)
{
	int		cmp1;
	int		cmp2;

	cmp1 = ft_lstcmp_lli(*aa, (*aa)->nxt);
	cmp2 = ft_lstcmp_lli((*aa)->nxt, (*aa)->nxt->nxt);
	if (is_123(cmp1, cmp2))
		return (sort3_a_small_123(aa, bb));
	if (is_132(cmp1, cmp2))
		return (sort3_a_small_132(aa, bb));
	if (is_213(cmp1, cmp2))
		return (sort3_a_small_213(aa, bb));
	if (is_231(cmp1, cmp2))
		return (sort3_a_small_231(aa, bb));
	if (is_312(cmp1, cmp2))
		return (sort3_a_small_312(aa, bb));
	if (is_321(cmp1, cmp2))
		return (sort3_a_small_321(aa, bb));
	return (0);
}
