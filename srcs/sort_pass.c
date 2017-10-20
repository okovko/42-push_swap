/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_pass.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/20 10:50:35 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/20 10:50:35 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int				sort_pass(t_lst **aa, t_lst **bb)
{
	int		ops;
	int		ii;
	int		jj;
	int		a_sz;
	int		b_sz;

	a_sz = ft_lstsz(*aa);
	b_sz = ft_lstsz(*bb);
	ii = 0;
	jj = 0;
	ops = 0;
	while (ii + 3 <= a_sz && jj + 3 <= b_sz)
	{
		ops += sort3_ab(aa, bb);
		ii += 3;
		jj += 3;
	}
	ops += sort_tips(aa, bb);
	return (ops);
}
