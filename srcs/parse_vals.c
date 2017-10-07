/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_vals.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/07 13:37:47 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/07 13:37:47 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_lst		*parse_vals(int ac, char **av, char **edg)
{
	int				ii;
	long long		val;
	char			*left;
	char			*riht;
	t_lst			*ll;

	ll = NULL;
	ii = 1;
	left = av[ii];
	riht = NULL;
	while (ii < ac)
	{
		while (true)
		{
			val = ft_strtolli(left, &riht);
			if (left == riht)
				break ;
			left = riht;
			ft_lstadd(&ll, ft_lstnew(&val, sizeof(val)));
		}
		ii++;
		left = av[ii];
	}
	*edg = riht;
	return (ft_lstsrev(&ll));
}
