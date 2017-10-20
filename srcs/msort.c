/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   msort.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/20 10:51:28 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/20 10:51:28 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int				msort(t_lst **aa, t_lst **bb)
{
	int		ops;

	ops = 0;
	ops += push_pass(aa, bb);
	ops += sort_pass(aa, bb);
	ops += merge_pass(aa, bb);
	ops += rot_pass(aa, bb);
	return (ops);
}
