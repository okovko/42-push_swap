/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/07 11:29:19 by olkovale          #+#    #+#             */
/*   Updated: 2017/10/20 19:44:36 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	unsigned char	c1;
	unsigned char	c2;

	c1 = *s1;
	c2 = *s2;
	while (c1 == c2 && c1)
	{
		c1 = (unsigned char)*++s1;
		c2 = (unsigned char)*++s2;
	}
	if (c1 && c2)
		return (c1 - c2);
	else
		return (0);
}
