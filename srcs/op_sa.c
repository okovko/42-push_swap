/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_sa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 19:39:54 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/20 19:19:38 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			op_sa(t_lst **a, t_lst **b)
{
	t_lst		*frst;
	t_lst		*scnd;
	void		*tmp;

	(void)b;
	frst = *a;
	scnd = frst->nxt;
	tmp = frst->dat;
	frst->dat = scnd->dat;
	scnd->dat = tmp;
}
