/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort3_ab_312_132.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/13 00:37:15 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/13 00:37:15 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int				sort3_ab_312_132(t_lst **aa, t_lst **bb)
{
	(void)"312.. 132..";
	op_sa(aa, bb);
	(void)"132.. 132..";
	ft_putstr("sa\n");
	return (1 + sort3_ab_132_132(aa, bb));
}