/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort3_b.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/15 04:06:35 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/20 20:32:22 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int				sort3_b(t_lst **aa, t_lst **bb)
{
	int		cmp1;
	int		cmp2;

	cmp1 = ft_lstcmp_lli(*bb, (*bb)->nxt);
	cmp2 = ft_lstcmp_lli((*bb)->nxt, (*bb)->nxt->nxt);
	if (is_123(cmp1, cmp2))
		return (sort3_b_123(aa, bb));
	if (is_132(cmp1, cmp2))
		return (sort3_b_132(aa, bb));
	if (is_213(cmp1, cmp2))
		return (sort3_b_213(aa, bb));
	if (is_231(cmp1, cmp2))
		return (sort3_b_231(aa, bb));
	if (is_312(cmp1, cmp2))
		return (sort3_b_312(aa, bb));
	if (is_321(cmp1, cmp2))
		return (sort3_b_321(aa, bb));
	return (0);
}
