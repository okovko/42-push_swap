/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort3_ab.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/12 20:25:21 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/20 16:55:25 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int		sort3_ab_more4(t_lst **aa, t_lst **bb)
{
	int		cmp_a1;
	int		cmp_a2;
	int		cmp_b1;
	int		cmp_b2;

	cmp_a1 = ft_lstcmp_lli(*aa, (*aa)->nxt);
	cmp_a2 = ft_lstcmp_lli((*aa)->nxt, (*aa)->nxt->nxt);
	cmp_b1 = ft_lstcmp_lli(*bb, (*bb)->nxt);
	cmp_b2 = ft_lstcmp_lli((*bb)->nxt, (*bb)->nxt->nxt);
	if (is_312(cmp_a1, cmp_a2) && is_312(cmp_b1, cmp_b2))
		return (sort3_ab_312_312(aa, bb));
	if (is_312(cmp_a1, cmp_a2) && is_321(cmp_b1, cmp_b2))
		return (sort3_ab_312_321(aa, bb));
	if (is_321(cmp_a1, cmp_a2) && is_123(cmp_b1, cmp_b2))
		return (sort3_ab_321_123(aa, bb));
	if (is_321(cmp_a1, cmp_a2) && is_132(cmp_b1, cmp_b2))
		return (sort3_ab_321_132(aa, bb));
	if (is_321(cmp_a1, cmp_a2) && is_213(cmp_b1, cmp_b2))
		return (sort3_ab_321_213(aa, bb));
	if (is_321(cmp_a1, cmp_a2) && is_231(cmp_b1, cmp_b2))
		return (sort3_ab_321_231(aa, bb));
	if (is_321(cmp_a1, cmp_a2) && is_312(cmp_b1, cmp_b2))
		return (sort3_ab_321_312(aa, bb));
	return (sort3_ab_321_321(aa, bb));
}

static int		sort3_ab_more3(t_lst **aa, t_lst **bb)
{
	int		cmp_a1;
	int		cmp_a2;
	int		cmp_b1;
	int		cmp_b2;

	cmp_a1 = ft_lstcmp_lli(*aa, (*aa)->nxt);
	cmp_a2 = ft_lstcmp_lli((*aa)->nxt, (*aa)->nxt->nxt);
	cmp_b1 = ft_lstcmp_lli(*bb, (*bb)->nxt);
	cmp_b2 = ft_lstcmp_lli((*bb)->nxt, (*bb)->nxt->nxt);
	if (is_231(cmp_a1, cmp_a2) && is_231(cmp_b1, cmp_b2))
		return (sort3_ab_231_231(aa, bb));
	if (is_231(cmp_a1, cmp_a2) && is_312(cmp_b1, cmp_b2))
		return (sort3_ab_231_312(aa, bb));
	if (is_231(cmp_a1, cmp_a2) && is_321(cmp_b1, cmp_b2))
		return (sort3_ab_231_321(aa, bb));
	if (is_312(cmp_a1, cmp_a2) && is_123(cmp_b1, cmp_b2))
		return (sort3_ab_312_123(aa, bb));
	if (is_312(cmp_a1, cmp_a2) && is_132(cmp_b1, cmp_b2))
		return (sort3_ab_312_132(aa, bb));
	if (is_312(cmp_a1, cmp_a2) && is_213(cmp_b1, cmp_b2))
		return (sort3_ab_312_213(aa, bb));
	if (is_312(cmp_a1, cmp_a2) && is_231(cmp_b1, cmp_b2))
		return (sort3_ab_312_231(aa, bb));
	return (sort3_ab_more4(aa, bb));
}

static int		sort3_ab_more2(t_lst **aa, t_lst **bb)
{
	int		cmp_a1;
	int		cmp_a2;
	int		cmp_b1;
	int		cmp_b2;

	cmp_a1 = ft_lstcmp_lli(*aa, (*aa)->nxt);
	cmp_a2 = ft_lstcmp_lli((*aa)->nxt, (*aa)->nxt->nxt);
	cmp_b1 = ft_lstcmp_lli(*bb, (*bb)->nxt);
	cmp_b2 = ft_lstcmp_lli((*bb)->nxt, (*bb)->nxt->nxt);
	if (is_213(cmp_a1, cmp_a2) && is_213(cmp_b1, cmp_b2))
		return (sort3_ab_213_213(aa, bb));
	if (is_213(cmp_a1, cmp_a2) && is_231(cmp_b1, cmp_b2))
		return (sort3_ab_213_231(aa, bb));
	if (is_213(cmp_a1, cmp_a2) && is_312(cmp_b1, cmp_b2))
		return (sort3_ab_213_312(aa, bb));
	if (is_213(cmp_a1, cmp_a2) && is_321(cmp_b1, cmp_b2))
		return (sort3_ab_213_321(aa, bb));
	if (is_231(cmp_a1, cmp_a2) && is_123(cmp_b1, cmp_b2))
		return (sort3_ab_231_123(aa, bb));
	if (is_231(cmp_a1, cmp_a2) && is_132(cmp_b1, cmp_b2))
		return (sort3_ab_231_132(aa, bb));
	if (is_231(cmp_a1, cmp_a2) && is_213(cmp_b1, cmp_b2))
		return (sort3_ab_231_213(aa, bb));
	return (sort3_ab_more3(aa, bb));
}

static int		sort3_ab_more1(t_lst **aa, t_lst **bb)
{
	int		cmp_a1;
	int		cmp_a2;
	int		cmp_b1;
	int		cmp_b2;

	cmp_a1 = ft_lstcmp_lli(*aa, (*aa)->nxt);
	cmp_a2 = ft_lstcmp_lli((*aa)->nxt, (*aa)->nxt->nxt);
	cmp_b1 = ft_lstcmp_lli(*bb, (*bb)->nxt);
	cmp_b2 = ft_lstcmp_lli((*bb)->nxt, (*bb)->nxt->nxt);
	if (is_132(cmp_a1, cmp_a2) && is_132(cmp_b1, cmp_b2))
		return (sort3_ab_132_132(aa, bb));
	if (is_132(cmp_a1, cmp_a2) && is_213(cmp_b1, cmp_b2))
		return (sort3_ab_132_213(aa, bb));
	if (is_132(cmp_a1, cmp_a2) && is_231(cmp_b1, cmp_b2))
		return (sort3_ab_132_231(aa, bb));
	if (is_132(cmp_a1, cmp_a2) && is_312(cmp_b1, cmp_b2))
		return (sort3_ab_132_312(aa, bb));
	if (is_132(cmp_a1, cmp_a2) && is_321(cmp_b1, cmp_b2))
		return (sort3_ab_132_321(aa, bb));
	if (is_213(cmp_a1, cmp_a2) && is_123(cmp_b1, cmp_b2))
		return (sort3_ab_213_123(aa, bb));
	if (is_213(cmp_a1, cmp_a2) && is_132(cmp_b1, cmp_b2))
		return (sort3_ab_213_132(aa, bb));
	return (sort3_ab_more2(aa, bb));
}

int				sort3_ab(t_lst **aa, t_lst **bb)
{
	int		cmp_a1;
	int		cmp_a2;
	int		cmp_b1;
	int		cmp_b2;

	cmp_a1 = ft_lstcmp_lli(*aa, (*aa)->nxt);
	cmp_a2 = ft_lstcmp_lli((*aa)->nxt, (*aa)->nxt->nxt);
	cmp_b1 = ft_lstcmp_lli(*bb, (*bb)->nxt);
	cmp_b2 = ft_lstcmp_lli((*bb)->nxt, (*bb)->nxt->nxt);
	if (is_123(cmp_a1, cmp_a2) && is_123(cmp_b1, cmp_b2))
		return (sort3_ab_123_123(aa, bb));
	if (is_123(cmp_a1, cmp_a2) && is_132(cmp_b1, cmp_b2))
		return (sort3_ab_123_132(aa, bb));
	if (is_123(cmp_a1, cmp_a2) && is_213(cmp_b1, cmp_b2))
		return (sort3_ab_123_213(aa, bb));
	if (is_123(cmp_a1, cmp_a2) && is_231(cmp_b1, cmp_b2))
		return (sort3_ab_123_231(aa, bb));
	if (is_123(cmp_a1, cmp_a2) && is_312(cmp_b1, cmp_b2))
		return (sort3_ab_123_312(aa, bb));
	if (is_123(cmp_a1, cmp_a2) && is_321(cmp_b1, cmp_b2))
		return (sort3_ab_123_321(aa, bb));
	if (is_132(cmp_a1, cmp_a2) && is_123(cmp_b1, cmp_b2))
		return (sort3_ab_132_123(aa, bb));
	return (sort3_ab_more1(aa, bb));
}
