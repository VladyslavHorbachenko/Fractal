/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlahorba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 08:31:22 by vlahorba          #+#    #+#             */
/*   Updated: 2018/11/30 08:32:00 by vlahorba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int				sign;
	int				ten;
	char			*str;
	unsigned int	n2;

	ten = n < 0 ? 1 : 0;
	n2 = n;
	if ((sign = n) < 0)
		n2 = -n;
	while (n >= 9 || n <= -9)
	{
		ten++;
		n = n / 10;
	}
	if (!(str = (char *)malloc(sizeof(char) * (ten + 2))))
		return (NULL);
	str[ten + 1] = '\0';
	while (ten > -1)
	{
		str[ten--] = (n2 % 10) + '0';
		n2 = n2 / 10;
	}
	str[0] = sign < 0 ? '-' : str[0];
	return (str);
}
