/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_tips.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/20 10:50:26 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/20 19:25:32 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int				sort_tips(t_lst **aa, t_lst **bb)
{
	int		tip_a;
	int		tip_b;
	int		ops;

	tip_a = ft_lstsz(*aa) % 3;
	tip_b = ft_lstsz(*bb) % 3;
	ops = 0;
	if (0 == tip_a && tip_b)
		ops += sort3_a(aa, bb);
	if (0 == tip_b && tip_a)
		ops += sort3_b(aa, bb);
	if (2 == tip_a && 2 == tip_b)
		ops += sort2_ab(aa, bb);
	else if (2 == tip_a)
		ops += sort2_a(aa, bb);
	else if (2 == tip_b)
		ops += sort2_b(aa, bb);
	if (1 == tip_a && 1 == tip_b)
		ops += sort1_ab(aa, bb);
	else if (1 == tip_a)
		ops += sort1_a(aa, bb);
	else if (1 == tip_b)
		ops += sort1_b(aa, bb);
	return (ops);
}
