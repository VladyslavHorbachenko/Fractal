/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlahorba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 21:47:52 by vlahorba          #+#    #+#             */
/*   Updated: 2018/11/29 22:20:22 by vlahorba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t		begin;
	size_t		counter;

	begin = ft_strlen((const char *)s1);
	counter = 0;
	while (counter < n && s2[counter] != '\0')
	{
		s1[begin + counter] = s2[counter];
		counter = counter + 1;
	}
	s1[begin + counter] = '\0';
	return (s1);
}
