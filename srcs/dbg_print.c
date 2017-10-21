/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dbg_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/07 13:39:45 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/20 19:10:00 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include "push_swap.h"

void		dbg_print(t_lst *ll)
{
	t_lst	*beg;

	if (NULL == ll)
		return ;
	beg = ll;
	while (true)
	{
		fprintf(stderr, "%d\n", *(int *)ll->dat);
		ll = ll->nxt;
		if (beg == ll)
			break ;
	}
}
