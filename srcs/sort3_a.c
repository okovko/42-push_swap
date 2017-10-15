/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort3_a.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/15 03:38:17 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/15 03:38:17 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int				sort3_a(t_lst **aa, t_lst **bb)
{
	int		cmp1;
	int		cmp2;

	cmp1 = ft_lstcmp_lli(*aa, (*aa)->nxt);
	cmp2 = ft_lstcmp_lli((*aa)->nxt, (*aa)->nxt->nxt);
	if (is_123(cmp1, cmp2))
		return (sort3_a_123(aa, bb));
	if (is_132(cmp1, cmp2))
		return (sort3_a_132(aa, bb));
	if (is_213(cmp1, cmp2))
		return (sort3_a_213(aa, bb));
	if (is_231(cmp1, cmp2))
		return (sort3_a_231(aa, bb));
	if (is_312(cmp1, cmp2))
		return (sort3_a_312(aa, bb));
	if (is_321(cmp1, cmp2))
		return (sort3_a_321(aa, bb));
	return (0);
}
