/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_vals.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/07 13:37:47 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/07 15:22:31 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_bool		parse_vals(int ac, char **av, t_lst **ll)
{
	int				ii;
	long long		val;
	char			*left;
	char			*riht;

	*ll = NULL;
	ii = 1;
	left = av[ii];
	while (ii < ac)
	{
		while (true)
		{
			val = ft_strtolli(left, &riht);
			if (left == riht)
				break ;
			left = riht;
			ft_lstadd(ll, ft_lstnew(&val, sizeof(val)));
		}
		ii++;
		left = av[ii];
	}
	ft_lstsrev(ll);
	return ('\0' == *riht);
}
