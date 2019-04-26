/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlahorba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 20:16:59 by vlahorba          #+#    #+#             */
/*   Updated: 2018/11/30 09:47:20 by vlahorba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*string;
	unsigned char	symb;
	size_t			i;

	i = 0;
	string = (unsigned char *)s;
	symb = (unsigned char)c;
	while (n)
	{
		if (string[i] == symb)
		{
			return (string + i);
		}
		i++;
		n--;
	}
	return (NULL);
}
