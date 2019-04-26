/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlahorba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 09:10:57 by vlahorba          #+#    #+#             */
/*   Updated: 2018/11/30 09:11:05 by vlahorba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*b;
	size_t	start;
	size_t	end;

	if (!s)
		return (NULL);
	start = 0;
	end = ft_strlen(s);
	while (s[start] != '\0' && ft_isspace(s[start]))
		start++;
	if (s[start] == '\0')
		return (ft_strdup(s + start));
	while (s[end - 1] && ft_isspace(s[end - 1]))
		end--;
	b = ft_strsub(s, start, end - start);
	if (b)
		return (b);
	return (0);
}
