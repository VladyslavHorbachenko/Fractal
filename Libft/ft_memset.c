/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlahorba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 21:20:24 by vlahorba          #+#    #+#             */
/*   Updated: 2018/11/28 21:38:35 by vlahorba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t n)
{
	unsigned char *tmp;

	tmp = (unsigned char *)b;
	while (n--)
	{
		*tmp = (unsigned char)c;
		tmp++;
	}
	return (b);
}
