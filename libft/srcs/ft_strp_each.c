/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strp_each.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/20 13:36:26 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/20 13:36:26 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_bool		ft_strp_each(char *ss, t_bool (*pp)(char))
{
	char	cc;

	ft_putstr("got here\n");
	if (NULL == ss || NULL == pp)
		return (true);
	while ((cc = *ss))
		if (true == pp(cc))
			return (false);
		else
			ss++;
	ft_putstr("got here\n");
	return (true);
}
