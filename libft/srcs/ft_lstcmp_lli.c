/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstcmp_lli.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/06 18:21:29 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/06 18:23:33 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_lstcmp_lli(t_lst *a, t_lst *b)
{
	long long	a_val;
	long long	b_val;

	a_val = *(long long*)a->dat;
	b_val = *(long long*)b->dat;
	return (a_val - b_val);
}
