/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/18 08:15:21 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/09 21:41:48 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include "libft.h"

void	ft_putnbr(int val)
{
	char	ss[22];
	int		sz;
	int		tmp;

	sz = ft_nbrlen(val);
	val < 0 ? ss[0] = '-' : (void)0;
	val == 0 ? ss[0] = '0' : (void)0;
	ss[sz] = '\0';
	sz--;
	tmp = val;
	while (tmp)
	{
		ss[sz] = '0' + ABS(tmp % 10);
		tmp /= 10;
		sz--;
	}
	ft_putstr(ss);
}
