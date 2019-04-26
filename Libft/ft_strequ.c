/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlahorba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 08:40:27 by vlahorba          #+#    #+#             */
/*   Updated: 2018/11/30 08:40:34 by vlahorba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strequ(char const *s1, char const *s2)
{
	const unsigned char *p1 = (const unsigned char *)s1;
	const unsigned char *p2 = (const unsigned char *)s2;

	if (!p1 || !p2)
		return (0);
	while (*p1 == *p2)
	{
		if (*p1 == '\0' && *p2 == '\0')
			return (1);
		p1++;
		p2++;
	}
	return (0);
}
