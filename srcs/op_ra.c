/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_ra.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 20:57:13 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/08 16:00:01 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			op_ra(t_lst **a, t_lst **b)
{
	(void)b;
	*a = (*a)->nxt;
}
