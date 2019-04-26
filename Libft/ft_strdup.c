/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlahorba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 21:29:28 by vlahorba          #+#    #+#             */
/*   Updated: 2018/11/29 21:29:37 by vlahorba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*key;
	size_t	i;

	i = ft_strlen(s1);
	if (!(key = (char *)malloc(sizeof(char) * i + 1)))
		return ((void*)0);
	ft_strcpy(key, s1);
	return (key);
}
